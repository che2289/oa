#pragma once

#ifndef _SAMPLE_DAO_
#define _SAMPLE_DAO_
#include "BaseDAO.h"
#include "../../domain/do/org_personDo/org_personDO.h"
#include "../../domain/query/gets-person-lists/Personlistquery.h"

/**
 * 示例表数据库操作实现
 */
class PersonlistDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const PersonlistQuery::Wrapper& query);
	// 分页查询数据
	list<org_personDO> selectWithPage(const PersonlistQuery::Wrapper& query);
};
#endif // !_SAMPLE_DAO_
