#pragma once

#ifndef _MettingRoomList_SERVICE_
#define _MettingRoomList_SERVICE_
#include <list>
#include "domain/vo/metting/mettingroomlist/MettingRoomListVO.h"
#include "domain/query/metting/mettingroomlist/MettingRoomListQuery.h"
#include "domain/dto/metting/mettingroomlist/MettingRoomListDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class MettingRoomListService
{
public:
	// 分页查询所有数据
	MettingRoomListPageDTO::Wrapper listAll(const MettingRoomListQuery::Wrapper& query);
};

#endif // !_MettingRoomList_SERVICE_

