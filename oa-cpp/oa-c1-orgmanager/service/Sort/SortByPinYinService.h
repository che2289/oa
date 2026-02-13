#pragma once
#pragma once

#ifndef _SortByPinYin_SERVICE_
#define _SortByPinYin_SERVICE_
#include <list>
#include "domain/vo/Sort/SortByPinYinVO.h"
#include "domain/query/Sort/SortByPinYinQuery.h"
#include "domain/dto/Sort/SortByPinYinDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class SortByPinYinService
{
public:
	// 分页查询所有数据
	SortByPinYinPageDTO::Wrapper listAll(const SortByPinYinQuery::Wrapper& query);
};

#endif // !_SAMPLE_SERVICE_

