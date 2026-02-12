#pragma once
#ifndef _GETPERSONMEMBER_DTO_
#define _GETPERSONMEMBER_DTO_
#include "domain/GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class GetPersonMemberDTO : public oatpp::DTO
{
	DTO_INIT(GetPersonMemberDTO, DTO);
	// 人员id
	DTO_FIELD(String, role_xid);
	DTO_FIELD_INFO(role_xid) {
		info->description = ZH_WORDS_GETTER("PersonMember.field.ROLE_XID");
	}
	// 分组id
	DTO_FIELD(String, xgroupList);
	DTO_FIELD_INFO(xgroupList) {
		info->description = ZH_WORDS_GETTER("PersonMember.field.xgroupList");
	}
	// 顺序
	DTO_FIELD(UInt64, xorderColumn);
	DTO_FIELD_INFO(xorderColumn) {
		info->description = ZH_WORDS_GETTER("PersonMember.field.xorderColumn");
	}
};

/**
 * 示例分页传输对象
 */
class GetPersonMemberPageDTO : public PageDTO<GetPersonMemberDTO::Wrapper>
{
	DTO_INIT(GetPersonMemberPageDTO, PageDTO<GetPersonMemberDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_GETPERSONMEMBER_DTO_