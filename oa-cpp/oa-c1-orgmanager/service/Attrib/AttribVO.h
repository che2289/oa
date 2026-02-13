#pragma once

#ifndef _ATTRIB_VO_
#define _ATTRIB_VO_

#include "../../GlobalInclude.h"
#include "../../dto/Attrib/AttribDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class AttribJsonVO : public JsonVO<AttribDTO::Wrapper> {
	DTO_INIT(AttribJsonVO, JsonVO<AttribDTO::Wrapper>);
};

/**
 * 示例分页显示JsonVO，用于响应给客户端的Json对象
 */
class AttribPageJsonVO : public JsonVO<AttribPageDTO::Wrapper> {//!!!!!!!!!
	DTO_INIT(AttribPageJsonVO, JsonVO<AttribPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SAMPLE_VO_