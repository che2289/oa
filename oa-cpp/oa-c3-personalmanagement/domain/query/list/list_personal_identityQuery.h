#pragma once
#ifndef _LIST_PERSONAL_IDENTITYQUERY_
#define _LIST_PERSONAL_IDENTITYQUERY_
#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"



#include OATPP_CODEGEN_BEGIN(DTO)
class list_personal_identityQuery : public PageQuery
{
	DTO_INIT(list_personal_identityQuery, PageQuery);
	//唯一编码
	DTO_FIELD(String, xid);
	DTO_FIELD_INFO(xid) {
		info->description = ZH_WORDS_GETTER("sample.field.xid");
	}
	//身份名称
	DTO_FIELD(String, xname);
	DTO_FIELD_INFO(xname) {
		info->description = ZH_WORDS_GETTER("sample.field.xname");
	}
};


#include OATPP_CODEGEN_END(DTO)


#endif // !_LIST_PERSONAL_IDENTITYQUERY_
