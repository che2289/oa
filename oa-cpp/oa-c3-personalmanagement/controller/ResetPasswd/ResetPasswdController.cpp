#pragma once


#include "stdafx.h"
#include "ResetPasswdController.h"
#include "service/ResetPasswd/ResetPasswdService.h"

Int32JsonVO::Wrapper ResetPasswdController::
						execResetPasswd(const ResetPasswdQuery::Wrapper& query, const PayloadDTO& payload)
{
	// 向下层传递给service
	ResetPasswdService service;
	int32_t res = service.updateResetPasswd(query);

	auto jvo = Int32JsonVO::createShared();
	jvo->success(res);
	return jvo;
}
