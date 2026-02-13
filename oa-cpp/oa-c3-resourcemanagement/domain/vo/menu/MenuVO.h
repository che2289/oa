#pragma once

#ifndef _SAMPLE_VO_
#define _SAMPLE_VO_

#include "../../GlobalInclude.h"
#include "../../dto/menuAD/MenuADDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class MenuJsonVO : public JsonVO<MenuADDTO::Wrapper> {
	DTO_INIT(MenuJsonVO, JsonVO<MenuADDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SAMPLE_VO_