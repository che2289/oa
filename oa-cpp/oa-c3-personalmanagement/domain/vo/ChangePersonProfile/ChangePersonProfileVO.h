#pragma once

#ifndef _CHANGEPERSONPROFILE_H_
#define _CHANGEPERSONPROFILE_H_

#include "../../GlobalInclude.h"
#include "../../dto/ChangePersonProfile/ChangePersonProfileDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 定义一个用户信息显示JsonVO对象，用于响应给客户端
 */
class ChangePersonProfileJsonVO : public JsonVO<ChangePersonProfileDTO::Wrapper>
{
	DTO_INIT(ChangePersonProfileJsonVO, JsonVO<ChangePersonProfileDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)
#endif // _USERVO_H_