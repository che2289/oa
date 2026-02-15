#pragma once

#ifndef _MettingList_DAO_
#define _MettingList_DAO_
#include "BaseDAO.h"
#include "../../../domain/do/metting/mettinglist/MettingCreateDO.h"
#include "../../../domain/query/metting/mettingList/MettingListQuery.h"

/**
 * 数据库操作实现
 */
class MettingListDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const MettingListQuery::Wrapper& query);
	// 分页查询数据
	list<MettingListDO> selectWithPage(const MettingListQuery::Wrapper& query);
	// 通过姓名查询数据
	//list<MettingListDO> selectByName(const string& name);

};
#endif // !_MettingList_DAO_
