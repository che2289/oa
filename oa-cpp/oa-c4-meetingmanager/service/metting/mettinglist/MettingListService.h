#pragma once

#ifndef _MettingList_SERVICE_
#define _MettingList_SERVICE_
#include <list>
#include "domain/vo/metting/mettingList/MettingListVO.h"
#include "domain/query/metting/mettingList/MettingListQuery.h"
#include "domain/dto/metting/mettinglist/MettingListDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class MettingListService
{
public:
	// 分页查询所有数据
	MettingListPageDTO::Wrapper listAll(const MettingListQuery::Wrapper& query);

};

#endif // !_MettingList_SERVICE_

