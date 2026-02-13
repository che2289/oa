#pragma once

#ifndef _LIST_PERSONAL_IDENTITYDTO_
#define _LIST_PERSONAL_IDENTITYDTO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class list_personal_identityDTO : public oatpp::DTO 
{
	DTO_INIT(list_personal_identityDTO, DTO);
	//身份名称
	DTO_FIELD(String, xname);
	DTO_FIELD_INFO(xname) {
		info->description = ZH_WORDS_GETTER("sample.field.xname");
	}
	//所在组织
	DTO_FIELD(String, xunitName);
	DTO_FIELD_INFO(xunitName) {
		info->description = ZH_WORDS_GETTER("sample.field.xunitName");
	}
	//唯一编码
	DTO_FIELD(String, xid);
	DTO_FIELD_INFO(xid) {
		info->description = ZH_WORDS_GETTER("sample.field.xid");
	}
	//担任职务
	DTO_FIELD(String, xdistinguishedName);
	DTO_FIELD_INFO(xdistinguishedName) {
		info->description = ZH_WORDS_GETTER("sample.field.xdistinguishedName");
	}
	//主身份
	DTO_FIELD(Boolean, xmajor);
	DTO_FIELD_INFO(xmajor) {
		info->description = ZH_WORDS_GETTER("sample.field.xmajor");
	}
};
//分页传输
class listPageDTO : public PageDTO<list_personal_identityDTO::Wrapper>
{
	DTO_INIT(listPageDTO, PageDTO<list_personal_identityDTO::Wrapper>);

};
#include OATPP_CODEGEN_END(DTO)
#endif // !_LIST_PERSONAL_IDENTITYDTO_
