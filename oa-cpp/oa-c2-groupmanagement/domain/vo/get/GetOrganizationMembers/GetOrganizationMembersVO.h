#pragma once

#ifndef _GetOrganizationMembers_VO_
#define _GetOrganizationMembers_VO_

#include "../../../GlobalInclude.h"
#include "../../../query/get/GetOrganizationMembers/GetOrganizationMembersQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 分页显示JsonVO，用于响应给客户端的Json对象
 */
class GetOrganizationMembersPageJsonVO : public JsonVO<GetOrganizationMembersQuery::Wrapper> {
	DTO_INIT(GetOrganizationMembersPageJsonVO, JsonVO<GetOrganizationMembersQuery::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_GetOrganizationMembers_VO_