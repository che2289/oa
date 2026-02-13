#pragma once

#ifndef _SAMPLE_DTO_
#define _SAMPLE_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class PersonlistDTO : public oatpp::DTO
{
	DTO_INIT(PersonlistDTO, DTO);
	// 姓名
	DTO_FIELD(String, xname);
	DTO_FIELD_INFO(xname) {
		info->description = ZH_WORDS_GETTER("person.setting.get.field.name");
	}
	// 电话
	DTO_FIELD(String, xmobile);
	DTO_FIELD_INFO(xmobile) {
		info->description = ZH_WORDS_GETTER("person.setting.get.field.phone");
	}
	// 头像地址
	DTO_FIELD(String, xicon);
	DTO_FIELD_INFO(xicon) {
		info->description = ZH_WORDS_GETTER("person.setting.get.field.head");
	}
	// id
	DTO_FIELD(String, xid);
	DTO_FIELD_INFO(xid) {
		info->description = ZH_WORDS_GETTER("person.setting.get.field.id");
	}
	// xunique
	DTO_FIELD(String, xunique);
	DTO_FIELD_INFO(xunique) {
		info->description = ZH_WORDS_GETTER("person.setting.get.field.xunique");
	}
};

/**
 * 示例分页传输对象
 */
class PersonlistPageDTO : public PageDTO<PersonlistDTO::Wrapper>
{
	DTO_INIT(PersonlistPageDTO, PageDTO<PersonlistDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_DTO_