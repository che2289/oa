
#include "stdafx.h"
#include "modify_personal_identityController.h"
#include "../../domain/dto/modify/modify_personal_identityDTO.h"
#include "../../service/modify/modify_personal_identityService.h"
#include "../ApiDeclarativeServicesHelper.h"


StringJsonVO::Wrapper modify_personalidentityController::execModify_personalidentity(const modify_personal_identityDTO::Wrapper& dto)
{
	// 定义返回数据对象
	auto jvo = StringJsonVO::createShared();
	// 参数校验
	if (dto->xid->empty())
	{
		jvo->init(String(" "), RS_PARAMS_INVALID);
		return jvo;
	}


	// 定义一个Service
	modify_personal_identityService service;
	// 执行数据修改
	if (service.updateData(dto)) {
		jvo->success(dto->xid);
	}
	else
	{
		jvo->fail(dto->xid);
	}
	// 响应结果
	return jvo;
}
