#pragma once

#ifndef _MettingCreate_SERVICE_
#define _MettingCreate_SERVICE_
#include <list>
#include "domain/vo/metting/mettingCreate/MettingCreateVO.h"
#include "domain/query/metting/mettingcreate/MettingCreateQuery.h"
#include "domain/dto/metting/mettingcreate/MettingCreateDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class MettingCreateService
{
public:
	// 保存数据
	uint64_t saveData(const MettingCreateDTO::Wrapper& dto);
};

#endif // !_MettingCreate_SERVICE_

