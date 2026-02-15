#pragma once

#ifndef _MettingRoomList_DAO_
#define _MettingRoomList_DAO_
#include "BaseDAO.h"
#include "../../../domain/do/metting/mettingroomlist/MettingRoomListDO.h"
#include "../../../domain/query/metting/mettingroomlist/MettingRoomListQuery.h"

/**
 * 示例表数据库操作实现
 */
class MettingRoomListDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const MettingRoomListQuery::Wrapper& query);
	// 分页查询数据
	list<MettingRoomListDO> selectWithPage(const MettingRoomListQuery::Wrapper& query);
};
#endif // !_MettingRoomList_DAO_
