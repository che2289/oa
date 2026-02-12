#include "stdafx.h"
#include "GetPersonMemberDAO.h"
#include "GetPersonMemberMapper.h"
#include <sstream>
//定义条件解析宏，减少重复代码
#define SAMPLE_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->ROLE_XID) { \
	sql << " AND ROLE_XID=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->ROLE_XID.getValue("")); \
} 

uint64_t GetPersonMemberDAO::count(const GetPersonMemberQuery::Wrapper& query)
{
	stringstream sql;
	sql << "SELECT COUNT(*) FROM org_role_grouplist";
	SAMPLE_TERAM_PARSE(query, sql);
	string sqlStr = sql.str();
	std::cout << sqlStr << std::endl;
	return sqlSession->executeQueryNumerical(sqlStr, params);
}

list<GetPersonMemberDO> GetPersonMemberDAO::selectWithPage(const GetPersonMemberQuery::Wrapper& query)
{
	stringstream sql;
	sql << "SELECT ROLE_XID,xgroupList,xorderColumn FROM org_role_grouplist";
	SAMPLE_TERAM_PARSE(query, sql);
	sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
	GetPersonMemberMapper mapper;
	string sqlStr = sql.str();
	return sqlSession->executeQuery<GetPersonMemberDO, GetPersonMemberMapper>(sqlStr, mapper, params);
}
