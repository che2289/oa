#pragma once

#ifndef _DISABLEUNBANPERSON_DTO_
#define _DISABLEUNBANPERSON_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class DisableUnbanPersonDTO : public oatpp::DTO
{
	DTO_INIT(DisableUnbanPersonDTO, DTO);
	// 编号
	DTO_FIELD(String, xid);
	DTO_FIELD_INFO(xid) {
		info->description = ZH_WORDS_GETTER("disableunbanperson.user.field.id");
	}
	
	// 状态    1：活跃     0：禁用
	DTO_FIELD(String, xstatus);
	DTO_FIELD_INFO(xstatus) {
		info->description = ZH_WORDS_GETTER("disableunbanperson.user.field.state");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_DTO_