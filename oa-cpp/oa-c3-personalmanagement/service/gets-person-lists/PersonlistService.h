#pragma once

#ifndef _SAMPLE_SERVICE_
#define _SAMPLE_SERVICE_
#include <list>
#include "domain/vo/gets-person-lists/PersonlistVO.h"
#include "domain/query/gets-person-lists/Personlistquery.h"
#include "domain/dto/gets-person-lists/PersonlistDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class PersonlistService
{
public:
	// 分页查询所有数据
	PersonlistPageDTO::Wrapper listPersonInfo(const PersonlistQuery::Wrapper& query);
};

#endif // !_SAMPLE_SERVICE_

