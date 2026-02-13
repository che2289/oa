
#include "stdafx.h"
#include "modify_lockorunlock_officerController.h"
#include "service/modify/modify_lockorunlock_officerService.h"
#include "../ApiDeclarativeServicesHelper.h"
StringJsonVO::Wrapper modify_lockorunlock_officerController::execModify_lockorunlock_officer(const modify_lockorunlock_officerDTO::Wrapper& dto)
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
	//cout << dto->xunique.getValue("") << endl;
	modify_lockorunlock_officerService service;
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
