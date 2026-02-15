#pragma once

#ifndef _GetOrganizationMembers_QUERY_
#define _GetOrganizationMembers_QUERY_

#include "../../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 分页查询对象
 */
class GetOrganizationMembersQuery : public PageQuery
{
	DTO_INIT(GetOrganizationMembersQuery, PageQuery);
	//  群组唯一标识
	DTO_FIELD(String, groupxid);
	DTO_FIELD_INFO(groupxid) {
		info->description = ZH_WORDS_GETTER("AddOrRemoveIdentityMembers.field.id");
	}
	// 组织名称
	DTO_FIELD(String, name);
	DTO_FIELD_INFO(name) {
		info->description = ZH_WORDS_GETTER("AddOrRemoveIdentityMembers.field.name");
	}
	// 层级名称
	DTO_FIELD(String, xunitList);
	DTO_FIELD_INFO(xunitList) {
		info->description = ZH_WORDS_GETTER("AddOrRemoveIdentityMembers.field.xunitList");
	}

};
class GetOrganizationMembersPageQuery : public PageDTO<GetOrganizationMembersQuery::Wrapper>
{
	DTO_INIT(GetOrganizationMembersPageQuery, PageDTO<GetOrganizationMembersQuery::Wrapper>);
};
#include OATPP_CODEGEN_END(DTO)
#endif // !_GetOrganizationMembers_QUERY_


#ifndef _SGetOrganizationMembers_DTO_
#define _GetOrganizationMembers_DTO_
#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class GetOrganizationMembersDTO : public oatpp::DTO
{
	DTO_INIT(GetOrganizationMembersDTO, DTO);
	//  群组唯一标识
	DTO_FIELD(String, groupxid);
	DTO_FIELD_INFO(groupxid) {
		info->description = ZH_WORDS_GETTER("AddOrRemoveIdentityMembers.field.id");
	}
	// 组织名称
	DTO_FIELD(String, name);
	DTO_FIELD_INFO(name) {
		info->description = ZH_WORDS_GETTER("AddOrRemoveIdentityMembers.field.name");
	}
	// 层级名称
	DTO_FIELD(String, xunitList);
	DTO_FIELD_INFO(xunitList) {
		info->description = ZH_WORDS_GETTER("AddOrRemoveIdentityMembers.field.xunitList");
	}
};

/**
 * 示例分页传输对象
 */
class GetOrganizationMembersPageDTO : public PageDTO<GetOrganizationMembersDTO::Wrapper>
{
	DTO_INIT(GetOrganizationMembersPageDTO, PageDTO<GetOrganizationMembersDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_GetOrganizationMembers_DTO_