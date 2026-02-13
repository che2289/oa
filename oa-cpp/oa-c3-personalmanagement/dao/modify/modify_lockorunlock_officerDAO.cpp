


#include "stdafx.h"
#include "modify_lockorunlock_officerDAO.h"
#include "modify_lockorunlock_officerMapper.h"

#include <sstream>
//解析宏，减少重复代码
#define SAMPLE_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->xid) { \
	sql << " AND `xid`=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xid.getValue(" ")); \
} \
if (query->xlockTime) { \
	sql << " AND xlockTime=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xlockTime.getValue(" ")); \
} \
if (query->xstatusDes) { \
	sql << " AND xstatusDes=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xstatusDes.getValue(" ")); \
} \
if (query->xstatus) { \
	sql << " AND xstatus=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->xstatus.getValue(" ")); \
}

//仿造个人身份修改，找到字段后改正
int modify_lockorunlock_officerDAO::update(const org_personDO& uObj)
{
	string sql = "UPDATE `org_person` SET `xlockTime`=?, `xstatusDes`=?, `xstatus`=? WHERE `xid`=?";
	return sqlSession->executeUpdate(sql, "%s%s%s%s", uObj.getXlockTime(), uObj.getXstatusDes(), uObj.getXstatus(), uObj.getXid());
}


