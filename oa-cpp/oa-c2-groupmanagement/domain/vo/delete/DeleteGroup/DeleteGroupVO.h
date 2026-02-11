#pragma once

#ifndef _DELETEGROUPVO_H_
#define _DELETEGROUPVO_H_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


/**
 * 删除群组的主键显示对象
 */
class DeleteGroupVO : public oatpp::DTO
{
	DTO_INIT(DeleteGroupVO, DTO);
	//群组唯一标识
	API_DTO_FIELD_DEFAULT(String, id, ZH_WORDS_GETTER("groupManagement.groupInfo.field.id"));
};


/**
 * 群组删除主键显示JsonVO，用于响应给客户端的Json对象
 */
class DeleteGroupJsonVO : public JsonVO<DeleteGroupVO::Wrapper> {
	DTO_INIT(DeleteGroupJsonVO, JsonVO<DeleteGroupVO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_DELETEGROUPVO_H_