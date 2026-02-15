#pragma once
#ifndef _GetGroupMembers_DTO_
#define _GetGroupMembers_DTO_
#include "../../../GlobalInclude.h"
#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 传输对象
 */
class GetGroupMembersDTO : public oatpp::DTO
{
	DTO_INIT(GetGroupMembersDTO, DTO);
	
	// 群组名称
	DTO_FIELD(String, name);
	DTO_FIELD_INFO(name) {
		info->description = ZH_WORDS_GETTER("AddOrRemoveIdentityMembers.field.name");
	}
	// 群组全称
	DTO_FIELD(String, allname);
	DTO_FIELD_INFO(allname) {
		info->description = ZH_WORDS_GETTER("AddOrRemoveIdentityMembers.field.allname");
	}
	// 群组chengyuan的唯一标识符
	DTO_FIELD(String, xgroupList);
	DTO_FIELD_INFO(xgroupList) {
		info->description = ZH_WORDS_GETTER("AddOrRemoveIdentityMembers.field.id");
	}
};

/**
 * 分页传输对象
 */
class GetGroupMembersPageDTO : public PageDTO<GetGroupMembersDTO::Wrapper>
{
	DTO_INIT(GetGroupMembersPageDTO, PageDTO<GetGroupMembersDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_GetGroupMembers_DTO_