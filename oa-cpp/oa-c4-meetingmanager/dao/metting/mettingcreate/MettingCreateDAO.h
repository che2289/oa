#pragma once

#ifndef _MettingCreate_DAO_
#define _MettingCreate_DAO_
#include "BaseDAO.h"
#include "../../../domain/do/metting/mettingcreate/MettingCreateDO.h"
#include "../../../domain/query/metting/mettingcreate/MettingCreateQuery.h"

/**
 * 示例表数据库操作实现
 */
class MettingCreateDAO : public BaseDAO
{
public:
	// 统计数据条数
	//uint64_t count(const SampleQuery::Wrapper& query);
	// 分页查询数据
	//list<SampleDO> selectWithPage(const SampleQuery::Wrapper& query);
	// 通过姓名查询数据
	//list<SampleDO> selectByName(const string& name);
	
	// 插入数据
	uint64_t insert(const MettingCreateDO& iObj);
};
#endif // !_MettingCreate_DAO_
