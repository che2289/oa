
#include "stdafx.h"
#include "PasswdExpiredTimeDAO.h"

int PasswdExpiredTimeDAO::updatePasswdExpiredTime(const org_personDO& _do)
{
	std::string sql{"UPDATE `org_person` SET `xpasswordExpiredTime`=? WHERE `xid`=?"};
	return sqlSession->executeUpdate(sql, "%s%s", _do.getXpasswordExpiredTime(), _do.getXid());
}