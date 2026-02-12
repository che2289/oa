#pragma once
#pragma once
#ifndef _PERSONMEMBER_DAO_
#define _PERSONMEMBER_DAO_
#include "BaseDAO.h"
#include "domain/do/put/PersonMember/PersonMemberDO.h"

/**
 * 示例表数据库操作实现
 */
class PersonMemberDAO : public BaseDAO
{
public:
	// 插入数据
	uint64_t insert(const PersonMemberDO& iObj);
	// 通过ID删除数据
	int deleteById(uint64_t id);
};
#endif // !_PERSONMEMBER_DAO_
