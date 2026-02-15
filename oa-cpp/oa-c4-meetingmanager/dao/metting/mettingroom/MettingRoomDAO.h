#pragma once

#ifndef _MettingRoom_DAO_
#define _MettingRoom_DAO_
#include "BaseDAO.h"
#include "../../../domain/do/metting/mettingroom/MettingRoomDO.h"
#include "../../../domain/query/metting/mettingroom/MettingRoomQuery.h"
#include "../../../../lib-common/include/SimpleDateTimeFormat.h"
#include "../../../../lib-common/include/SnowFlake.h"

/**
 * 示例表数据库操作实现
 */
class MettingRoomDAO : public BaseDAO
{
public:
	// 分页查询数据
	list<MettingBuildDO> select();
	// 插入数据
	uint64_t insert(const MettingRoomDO& iObj);
};
#endif // !_MettingRoom_DAO_
