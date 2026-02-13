#pragma once

#ifndef _ADDPERSON_SERVICE_
#define _ADDPERSON_SERVICE_
#include <list>
#include "domain/dto/put/AddPersonDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class AddPersonService
{
public:
	// 保存数据
	uint64_t saveData(const AddPersonDTO::Wrapper& dto);
};

#endif // !_ADDPERSON_SERVICE_

