#pragma once

#ifndef _ORGUNITATTRIBUTE_SERVICE_
#define _ORGUNITATTRIBUTE_SERVICE_
#include <list>
#include "domain/vo/OrgUnitattributeVO.h"
#include "domain/query/OrgUnitattributeQuery.h"
#include "domain/dto/OrgUnitattributeDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class OrgUnitattributeService
{
public:
	// 分页查询所有数据
	OrgUnitattributePageDTO::Wrapper listAll(const OrgUnitattributeQuery::Wrapper& query);

	// 通过ID删除数据
	bool removeData(string id);
};

#endif // !_ORGUNITATTRIBUTE_SERVICE_

