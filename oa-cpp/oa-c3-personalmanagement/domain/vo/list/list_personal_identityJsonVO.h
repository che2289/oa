#pragma once
#pragma once

#ifndef _LIST_PERSONAL_IDENTITYJSONVO_
#define _LIST_PERSONAL_IDENTITYJSONVO_

#include "../../GlobalInclude.h"
#include "../../dto/list/list_personal_identityDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class list_personal_identityJsonVO : public JsonVO<list_personal_identityDTO::Wrapper> {
	DTO_INIT(list_personal_identityJsonVO, JsonVO<list_personal_identityDTO::Wrapper>);
};

/**
 * 示例分页显示JsonVO，用于响应给客户端的Json对象
 */
class listPageJsonVO : public JsonVO<listPageDTO::Wrapper> {
	DTO_INIT(listPageJsonVO, JsonVO<listPageDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif // !_LIST_PERSONAL_IDENTITYJSONVO_
