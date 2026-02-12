#include "stdafx.h"
#include "UserDAO.h"
#include "UserMapper.h"
#include <sstream>

//定义条件解析宏，减少重复代码
#define SAMPLE_TERAM_PARSE(query, sql) \
SqlParams params; \
if (query->GROUP_XID) { \
	sql << " AND `GROUP_XID`=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->GROUP_XID.getValue("")); \
} \
if (query->xorderNumber) { \
	sql << " AND `xorderNumber`=?"; \
	SQLPARAMS_PUSH(params, "i", int, query->xorderNumber.getValue(0)); \
} \
if (query->xname) { \
	sql << " AND `xname`=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xname.getValue("")); \
} \
if (query->xmobile) { \
	sql << " AND xmobile=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xmobile.getValue("")); \
} \
if (query->xmail) { \
	sql << " AND xmail=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xmail.getValue("")); \
}


uint64_t UserDAO::count(const UserQuery::Wrapper & query)
{
	//stringstream sql;
	//sql << "SELECT COUNT(GROUP_XID) FROM org_group_personlist";
	//SqlParams params; sql << " WHERE 1 = 1"; if (query->GROUP_XID) {
	//	sql << " AND GROUP_XID=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->GROUP_XID.getValue(""))));
	//}/*if (query->xorderNumber) {
	//	sql << " AND `xorderNumber`=?"; params.emplace_back(SqlParam("i", std::make_shared<int>(query->xorderNumber.getValue(0))));
	//}if (query->xname) {
	//	sql << " AND `xname`=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->xname.getValue(""))));
	//} if (query->xmobile) {
	//	sql << " AND xmobile=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->xmobile.getValue(""))));
	//} if (query->xmail) {
	//	sql << " AND xmail=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->xmail.getValue(""))));
	//};*/
	//string sqlStr = sql.str();
	//std::cout << sqlStr << std::endl;
	//return sqlSession->executeQueryNumerical(sqlStr);
	stringstream sql;
	sql << "SELECT COUNT(GROUP_XID) FROM org_group_personlist WHERE 1=1";
	/*SqlParams params; sql << " WHERE 1 = 1"; if (query->GROUP_XID) {
		sql << " AND GROUP_XID=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->GROUP_XID.getValue(""))));
	}*/
	SAMPLE_TERAM_PARSE(query, sql);
	string sqlStr = sql.str();
	std::cout << sqlStr << std::endl;
	return sqlSession->executeQueryNumerical(sqlStr, params);
}
//uint64_t SampleDAO::count(const SampleQuery::Wrapper& query)
//{
//	stringstream sql;
//	sql << "SELECT COUNT(*) FROM sample";
//	SAMPLE_TERAM_PARSE(query, sql);
//	string sqlStr = sql.str();
//	return sqlSession->executeQueryNumerical(sqlStr, params);
//}

std::list<UserDO> UserDAO::selectWithPage(const UserQuery::Wrapper& query)
{
	//stringstream sql;
	//sql << "SELECT GROUP_XID,xorderNumber,xname,xmobile,xmail FROM org_person,org_group_personlist WHERE org_person.xid = org_group_personlist.xpersonList";
	//SqlParams params; sql << "WHERE 1 = 1";/*if (query->GROUP_XID) {
	//	sql << " AND `GROUP_XID`=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->GROUP_XID.getValue(""))));
	//}*/if (query->xorderNumber) {
	//	sql << " AND `xorderNumber`=?"; params.emplace_back(SqlParam("i", std::make_shared<int>(query->xorderNumber.getValue(0))));
	//}if (query->xname) {
	//	sql << " AND `xname`=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->xname.getValue(""))));
	//} if (query->xmobile) {
	//	sql << " AND xmobile=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->xmobile.getValue(""))));
	//} if (query->xmail) {
	//	sql << " AND xmail=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->xmail.getValue(""))));
	//};
	//sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
	//UserMapper mapper;
	//string sqlStr = sql.str();
	//return sqlSession->executeQuery<UserDO, UserMapper>(sqlStr, mapper);


	stringstream sql;
	sql << "SELECT GROUP_XID,xorderNumber,xname,xmobile,xmail FROM org_person,org_group_personlist WHERE org_person.xid = org_group_personlist.xpersonList";
	cout << query->GROUP_XID.getValue("") << endl;
	/*if (query->GROUP_XID) {
		sql << " AND `GROUP_XID`=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->GROUP_XID.getValue(""))));
	}*/
	//if (query->xorderNumber) {
	//	sql << " AND `xorderNumber`=?"; params.emplace_back(SqlParam("i", std::make_shared<int>(query->xorderNumber.getValue(0))));
	//}if (query->xname) {
	//	sql << " AND `xname`=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->xname.getValue(""))));
	//} if (query->xmobile) {
	//	sql << " AND xmobile=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->xmobile.getValue(""))));
	//} if (query->xmail) {
	//	sql << " AND xmail=?"; params.emplace_back(SqlParam("s", std::make_shared<std::string>(query->xmail.getValue(""))));
	//};
	SAMPLE_TERAM_PARSE(query, sql);
	sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
	UserMapper mapper;
	string sqlStr = sql.str();
	cout << sqlStr << endl;
	return sqlSession->executeQuery<UserDO, UserMapper>(sqlStr, mapper, params);
}


