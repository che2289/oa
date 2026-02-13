#pragma once

#ifndef _ORGMEM_DTO_
#define _ORGMEM_DTO_
#include "../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class OrgMemDTO : public oatpp::DTO
{
	DTO_INIT(OrgMemDTO, DTO);
	// 编号
	DTO_FIELD(UInt64, id);
	DTO_FIELD_INFO(id) {
		info->description = ZH_WORDS_GETTER("sample.field.id");
	}
	
};


/**
 * 示例分页传输对象
 */


#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_DTO_