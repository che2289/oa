#pragma once

#ifndef _REMOVEPERSON_VO_
#define _REMOVEPERSON_VO_

#include "../../GlobalInclude.h"
#include "../../dto/del/RemovePersonDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 显示JsonVO，用于响应给客户端的Json对象
 */
class RemovePersonJsonVO : public JsonVO<RemovePersonDTO::Wrapper> {
	DTO_INIT(RemovePersonJsonVO, JsonVO<RemovePersonDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif // !_REMOVEPERSON_VO_