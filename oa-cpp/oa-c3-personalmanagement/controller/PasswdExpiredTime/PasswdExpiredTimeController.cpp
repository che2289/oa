#pragma once


#include "PasswdExpiredTimeController.h"
#include "service/PasswdExpiredTime/PasswdExpiredTimeService.h"

StringJsonVO::Wrapper PasswdExpiredTimeController::
					     execSetPasswdExipredTime(const PasswdExpiredTimeQuery::Wrapper& query, const PayloadDTO& payload)
{
	// 向下调用service层
	PasswdExpiredTimeService service;

	// 若res为空, 则操作成功, 返回当前系统时间; 否则返回res(为错误原因)
	std::string res = service.setPasswdExpiredTime(query);

	// 响应结果
	auto jvo = StringJsonVO::createShared();
	if(!res.empty()) {
		jvo->success(res);
	}
	else {
		jvo->fail("Failed. Same Value");
	}
	
	return jvo;
}