
#include "stdafx.h"
#include "ResetPasswdService.h"
#include "dao/ResetPasswd/ResetPasswdDAO.h"
#include "domain/do/org_personDo/org_personDO.h"

int32_t ResetPasswdService::updateResetPasswd(const ResetPasswdQuery::Wrapper& query)
{
	org_personDO _do;
	// 将query转换成do
	ZO_STAR_DOMAIN_DTO_TO_DO(_do, query, Xid, id, Xpassword, passwd);
	
	// 调用dao
	ResetPasswdDAO dao;
	return dao.updateResetPasswd(_do);
}