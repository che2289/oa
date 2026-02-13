#pragma once

#ifndef _DISABLEUNBANPERSON_CONTROLLER_
#define _DISABLEUNBANPERSON_CONTROLLER_

#include "domain/vo/BaseJsonVO.h"
#include "domain/dto/DisableUnbanPerson/DisableUnbanPersonDTO.h"


// 0 定义API控制器使用宏
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

/**
 * 示例控制器，演示基础接口的使用
 */
class DisableUnbanPersonController : public oatpp::web::server::api::ApiController // 1 继承控制器
{
	// 2 定义控制器访问入口
	API_ACCESS_DECLARE(DisableUnbanPersonController);
	// 3 定义接口
public:
	

	// 3.1 定义修改接口描述
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("disableunbanperson.user.summary"), disableunban, Uint64JsonVO::Wrapper);
	// 3.2 定义修改接口处理
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/personal-management/disable-unban-people", disableunban, BODY_DTO(DisableUnbanPersonDTO::Wrapper, dto), execModifySample(dto));

	
private:

	// 3.3 演示修改数据
	Uint64JsonVO::Wrapper execModifySample(const DisableUnbanPersonDTO::Wrapper& dto);

};

// 0 取消API控制器使用宏
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen
#endif // _SAMPLE_CONTROLLER_