#pragma once

#ifndef _GetGroupMembers_VO_
#define _GetGroupMembers_VO_

#include "../../../GlobalInclude.h"
#include "../../../query/get/GetGroupMembers/GetGroupMembersQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 分页显示JsonVO，用于响应给客户端的Json对象
 */
class GetGroupMembersPageJsonVO : public JsonVO<GetGroupMembersQuery::Wrapper> {
	DTO_INIT(GetGroupMembersPageJsonVO, JsonVO<GetGroupMembersQuery::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_GetGroupMembers_VO_