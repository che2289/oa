#pragma once

#ifndef _DELETEGROUPDTO_H_
#define _DELETEGROUPDTO_H_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class DeleteGroupDTO : public oatpp::DTO
{
	DTO_INIT(DeleteGroupDTO, DTO);
	//群组唯一标识
	API_DTO_FIELD_DEFAULT(String, id, ZH_WORDS_GETTER("groupManagement.groupInfo.field.id"));
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_DELETEGROUPDTO_H_