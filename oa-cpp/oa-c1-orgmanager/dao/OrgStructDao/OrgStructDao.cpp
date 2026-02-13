
#include "stdafx.h"
#include "OrgStructDao.h"
#include "OrgStructMapper.h"
#include <sstream>

//定义条件解析宏，减少重复代码
#define SAMPLE_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->xdistinguishedName) { \
	sql << " AND `xdistinguishedName`=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xdistinguishedName.getValue({})); \
} \
if (query->xemployee) { \
	sql << " AND xemployee=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xemployee.getValue({})); \
} \
if (query->xmail) { \
	sql << " AND xmail=?"; \
	SQLPARAMS_PUSH(params, "i",std::string, query->xmail.getValue({})); \
}\
if (query->xmobile) {\
		sql << " AND xmobile=?"; \
		SQLPARAMS_PUSH(params, "i",std::string, query->xmobile.getValue({})); \
}\
if (query->xmobile) {\
	sql << " AND xmobile=?"; \
	SQLPARAMS_PUSH(params, "i", std::string, query->xmobile.getValue({})); \
}

#define ORGUNIT_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->unit_xname) { \
		sql << " AND o.`xname`=?"; \
		SQLPARAMS_PUSH(params, "s", std::string, query->unit_xname.getValue("")); \
}


list<OrgStructDO> OrgStructDao::selectWithPage(const OrgStructPageQuery::Wrapper& query)
{
	stringstream sql;
	// xdistinguishedName  xemployee xmail xmobile 
	sql << "SELECT xdistinguishedName,xemployee,xmail,xmobile,xunique, xiconLdpi, xname xid FROM org_person";
	// AND `xdistinguishedName`=? AND xmail=? AND xmobile=?
	// 构建限制 : 当 AND `xdistinguishedName`=? AND xmail=? AND xmobile=?都存在时才会执行查询
	SAMPLE_TERAM_PARSE(query, sql);
	sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
	OrgStructMapper mapper;
	string sqlStr = sql.str();
	return sqlSession->executeQuery<OrgStructDO, OrgStructMapper>(sqlStr, mapper);
}

/*
	功能 : FastDFS条件查询信息
*/
list<OrgStructDO> OrgStaffDao::selectWithPage(const OrgStaffPageQuery::Wrapper& query)
{
	stringstream sql;
	sql << "SELECT xdistinguishedName,xmobile xiconLdpi FROM org_person where xname like '";
	sql << query->Pinyin.getValue("") << "%' ";
	sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
	OrgStaffMapper mapper;
	string sqlStr = sql.str();
	return sqlSession->executeQuery<OrgStructDO, OrgStaffMapper>(sqlStr, mapper);
}

int OrgStaffDao::deleteById(std::string xemployee)
{
	string sql = "DELETE FROM `org_person` WHERE `xemployee`=?";
	return sqlSession->executeUpdate(sql, "%s", xemployee);
}