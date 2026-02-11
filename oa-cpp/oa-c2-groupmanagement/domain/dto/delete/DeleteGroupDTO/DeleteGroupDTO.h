#pragma once

#ifndef _GROUPLIST_MAPPER_
#define _GROUPLIST_MAPPER_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class DeleGroupDTO : public oatpp::DTO
{
	DTO_INIT(DeleGroupDTO, DTO);
	//群组唯一标识
	API_DTO_FIELD_DEFAULT(String, id, ZH_WORDS_GETTER("groupManagement.groupInfo.field.id"));
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SAMPLE_MAPPER_