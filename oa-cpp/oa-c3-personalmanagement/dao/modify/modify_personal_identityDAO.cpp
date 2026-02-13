
#include "stdafx.h"
#include "modify_personal_identityDAO.h"
#include "modify_personal_identityMapper.h"
#include <sstream>

//定义条件解析宏，减少重复代码
#define SAMPLE_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->xid) { \
	sql << " AND `xid`=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xid.getValue(" ")); \
} \
if (query->xname) { \
	sql << " AND xname=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xname.getValue(" ")); \
} \
if (query->xmajor) { \
	sql << " AND xmajor=?"; \
	SQLPARAMS_PUSH(params, "b", std::bool, query->xmajor.getValue(" ")); \
}


int modify_personal_identityDAO::update(const org_identitypersonDO & uObj)
{
	string sql = "UPDATE `org_identity` SET `xname`=?, `xmajor`=? WHERE `xid`=?";
	return  sqlSession->executeUpdate(sql, "%s%b%s", uObj.getXname(), uObj.getXmajor(), uObj.getXid());
	
}

