#pragma once
#ifndef _GROUP__VO_
#define _GROUP__VO_

#include "../../GlobalInclude.h"
#include "../../dto/group/Group_DTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)


/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class User_JsonVO : public JsonVO<User_DTO::Wrapper> {
	DTO_INIT(User_JsonVO, JsonVO<User_DTO::Wrapper>);
};
/**
 * 示例分页显示JsonVO，用于响应给客户端的Json对象
 */
class UserPage_JsonVO : public JsonVO<UserPageDTO::Wrapper> {
	DTO_INIT(UserPage_JsonVO, JsonVO<UserPageDTO::Wrapper>);
};
/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */

class Group_JsonVO : public JsonVO<Group_DTO::Wrapper> {
	DTO_INIT(Group_JsonVO, JsonVO<Group_DTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif // !_GROUP_VO_