#pragma once
#ifndef _PERSONMEMBER_H_
#define _PERSONMEMBER_H_
#include <list>
#include "domain/dto/rolemanagement/RoleManagementDTO/put/personmember/PersonMemberDTO.h"
#include"domain/do/put/PersonMember/PersonMemberDO.h"
/**
 * 服务实现，演示基础的示例服务实现
 */
class PersonMemberService
{
public:
	// 保存数据
	uint64_t saveData(const PersonMemberDTO::Wrapper& dto);
	// 通过ID删除数据
	bool removeData(uint64_t id);
};

#endif // !_PERSONMEMBER_H_