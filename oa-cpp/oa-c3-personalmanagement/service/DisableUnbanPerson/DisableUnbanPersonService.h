#pragma once

#ifndef _DISABLEUNBANPERSON_SERVICE_
#define _DISABLEUNBANPERSON_SERVICE_
#include <list>

#include "domain/dto/DisableUnbanPerson/DisableUnbanPersonDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class DisableUnbanPersonService
{
public:

	// 修改数据
	bool updateData(const DisableUnbanPersonDTO::Wrapper& dto);

};

#endif // !_SAMPLE_SERVICE_

