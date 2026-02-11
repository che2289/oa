#pragma once

#ifndef _IDMEMBERVO_H_
#define _IDMEMBERVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/get/IDmemberDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * IDmemberPageJsonVO，用于响应给客户端的Json对象(分页)
 */
class IDmemberPageJsonVO : public JsonVO<IDmemberPageDTO::Wrapper> {
	DTO_INIT(IDmemberPageJsonVO, JsonVO<IDmemberPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_IDMEMBERVO_H_