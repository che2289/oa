
#include "stdafx.h"
#include "rolemanagementDAO.h"
#include "rolemanagementMapper.h"
#include "GroupIdentityListMapper.h"
#include <sstream>

//定义条件解析宏，减少重复代码
#define rolemanagement_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->groupxid) { \
	sql << " AND `GROUP_XID`=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->groupxid.getValue("")); \
} \
// if (query->pageSize) { \
// 	sql << " AND age=?"; \
// 	SQLPARAMS_PUSH(params, "i", int, query->pageSize.getValue(0)); \
// }

uint64_t rolemanagementDAO::deleteOrgRoleGroupList(const string groupId, const string identityId, const uint64_t maxColumn)
{
	string sql = "SELECT xorderColumn FROM `org_group_identitylist` WHERE GROUP_XID = ? AND xidentityList = ?";
	uint64_t columnId = sqlSession->executeQueryNumerical(sql, "%s%s", groupId, identityId);
	if (!(columnId == maxColumn))
	{
		sql = "UPDATE `org_group_identitylist` SET xorderColumn = ? WHERE GROUP_XID = ? AND xorderColumn = ? ";
		sqlSession->executeUpdate(sql, "%i%s%i", columnId, groupId, maxColumn);
	}
	sql = "DELETE FROM `org_group_identitylist` WHERE GROUP_XID = ? AND xidentityList = ?";
	return sqlSession->executeUpdate(sql, "%s%s", groupId, identityId);
}

uint64_t rolemanagementDAO::insertToOrgRoleGroupList(const std::list<OrgGroupIdentitylistDO>&listIobj)
{
	if (listIobj.empty())
	{
		return 0;
	}
	string sql = "INSERT INTO `org_group_identitylist` (`GROUP_XID`, `xidentityList`, `xorderColumn`) VALUES ";
	std::ostringstream placeholders;
	for (auto it = listIobj.begin(); it != listIobj.end(); ++it)
	{
		if (it != listIobj.begin())
		{
			placeholders << ",";
		}
		placeholders << "(?,?,?)";
	}
	sql += placeholders.str();
	SqlParams params;
	for (const auto& roleGroup : listIobj) {
		SQLPARAMS_PUSH(params, "s", std::string, roleGroup.getGroupxid());
		SQLPARAMS_PUSH(params, "s", std::string, roleGroup.getXidentityList());
		SQLPARAMS_PUSH(params, "i", uint64_t, roleGroup.getXorderColumn());
	}
	return sqlSession->executeUpdate(sql, params);
}

uint64_t rolemanagementDAO::updateOrgRoleGroupList(const string groupId, list<oatpp::String>&dataIdentityList, std::list<OrgGroupIdentitylistDO>&listdata)
{
	uint64_t count = 0;
	uint64_t maxOrderColumn = 0;
	sqlSession->beginTransaction();
	count += insertToOrgRoleGroupList(listdata);

	for (const auto item : dataIdentityList)
	{
		maxOrderColumn = selectMaxXordercolumn(groupId, "org_group_identitylist", "GROUP_XID");
		count += deleteOrgRoleGroupList(groupId, item.getValue({}), maxOrderColumn);
	}
	if (count == 0)
	{
		sqlSession->rollbackTransaction();
	}
	sqlSession->commitTransaction();
	return count;
}

uint64_t rolemanagementDAO::selectMaxXordercolumn(const string groupId, const string dataTableName, const string field)
{
	stringstream sql;
	sql << "SELECT MAX(xorderColumn) FROM `";
	sql << dataTableName;
	sql << "` WHERE ";
	sql << field;
	sql << " = '";
	sql << groupId << "\'";
	string sqlStr = sql.str();
	//std::cout << sqlStr << std::endl;
	return sqlSession->executeQueryNumerical(sqlStr);
}

list<oatpp::String> rolemanagementDAO::selectIdentityList(const string groupId)
{
	string sql = "SELECT xidentityList FROM org_group_identitylist WHERE GROUP_XID = ?";
	GroupIdentityListMapper mapper;
	return sqlSession->executeQuery<oatpp::String, GroupIdentityListMapper>(sql, mapper, "%s", groupId);

}

uint64_t rolemanagementDAO::countG(const GetGroupMembersQuery::Wrapper & query)
{
	stringstream sql;
	sql << "SELECT COUNT(*) FROM org_group_grouplist";
	rolemanagement_TERAM_PARSE(query, sql);
	string sqlStr = sql.str();
	return sqlSession->executeQueryNumerical(sqlStr, params);
}

// 获取群组成员		AND `org_group_grouplist`.GROUP_XID = ?
std::list<OrgGroupGrouplistDO> rolemanagementDAO::selectWithPage(const GetGroupMembersQuery::Wrapper& query)
{
	//cout << "进入dao";
	stringstream sql;
	sql << "SELECT `org_group`.xname, `org_group`.xdistinguishedName,`org_group_grouplist`.xgroupList FROM `org_group_grouplist` LEFT JOIN `org_group` ON `org_group_grouplist`.xgroupList = `org_group`.xid";
	rolemanagement_TERAM_PARSE(query, sql);
	sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
	GetGroupMembersMapper mapper;
	string sqlStr = sql.str();
// 	cout << endl;
// 	cout << sqlStr << endl;
	return sqlSession->executeQuery<OrgGroupGrouplistDO, GetGroupMembersMapper>(sqlStr, mapper, params);
}

uint64_t rolemanagementDAO::countO(const GetOrganizationMembersQuery::Wrapper& query)
{
	stringstream sql;
	sql << "SELECT COUNT(*) FROM org_group_unitlist";
	rolemanagement_TERAM_PARSE(query, sql);
	string sqlStr = sql.str();
	return sqlSession->executeQueryNumerical(sqlStr, params);
}

//获取组织成员
std::list<OrgGroupUnitlistDO> rolemanagementDAO::selectWithPage(const GetOrganizationMembersQuery::Wrapper& query)
{
	cout << "进入dao";
	stringstream sql;
	sql << "SELECT `org_group`.xname, `org_group_unitlist`.xunitList FROM `org_group_unitlist` LEFT JOIN `org_group` ON `org_group_unitlist`.GROUP_XID = `org_group`.xid";
	rolemanagement_TERAM_PARSE(query, sql);
	sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
	GetOrganizationMembersMapper mapper;
	string sqlStr = sql.str();
 	cout << endl;
 	cout << sqlStr << endl;
	return sqlSession->executeQuery<OrgGroupUnitlistDO, GetOrganizationMembersMapper>(sqlStr, mapper, params);
}

////增加身份成员
//uint64_t rolemanagementDAO::insert(const OrgGroupIdentitylistDO& iObj)
//{
//	string sql = "INSERT INTO `org_group_identitylist` (`GROUP_XID`, `xidentityList`) VALUES ( ?,?)";
//	return sqlSession->executeUpdate(sql, "%s%s", iObj.getGroupxid(), iObj.getXidentityList());
//}
//
//
//
////通过groupxid删除身份成员
//int rolemanagementDAO::deleteById(const OrgGroupIdentitylistDO& iObj)
//{
//	string sql = "DELETE FROM `org_group_identitylist` WHERE `GROUP_XID`=? AND `xidentityList`=?";
//	return sqlSession->executeUpdate(sql, "%s%s", iObj.getGroupxid(), iObj.getXidentityList());
//}



// 通过groupxid删除身份成员
int rolemanagementDAO::deleteById(const OrgGroupIdentitylistDO& iObj)
{
	string sql = "DELETE FROM `org_group_identitylist` WHERE `GROUP_XID`=? AND `xidentityList`=?";
	return sqlSession->executeUpdate(sql, "%s%s", iObj.getGroupxid(), iObj.getXidentityList());
}


