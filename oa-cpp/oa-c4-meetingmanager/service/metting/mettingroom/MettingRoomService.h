#pragma once
#ifndef _MettingRoom_SERVICE_
#define _MettingRoom_SERVICE_
#include <list>
#include "domain/vo/metting/mettingroom/MettingRoomVO.h"
#include "domain/query/metting/mettingroom/MettingRoomQuery.h"
#include "domain/dto/metting/mettingroom/MettingRoomDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class MettingRoomService
{
public:
	// 分页查询所有数据
	MettingBuildPageDTO::Wrapper listAll();
	// 保存数据
	uint64_t saveData(const MettingRoomDTO::Wrapper& dto);
	
};

#endif // !_MettingRoom_SERVICE_

