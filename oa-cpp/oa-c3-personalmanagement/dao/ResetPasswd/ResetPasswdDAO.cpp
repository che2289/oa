#pragma once

#include "stdafx.h"
#include "ResetPasswdDAO.h"

int32_t ResetPasswdDAO::updateResetPasswd(const org_personDO& _do)
{
	std::string sql{"UPDATE `org_person` SET `xpassword`=? WHERE `xid`=?"};
	return sqlSession->executeUpdate(sql, "%s%s", _do.getXpassword(), _do.getXid());
}