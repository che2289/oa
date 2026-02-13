#pragma once

#ifndef _SAMPLE_SERVICE_
#define _SAMPLE_SERVICE_
#include <list>
#include "domain/vo/menu/MenuVO.h"
#include "domain/dto/menuAD/MenuADDTO.h"
/**
 * 示例服务实现，演示基础的示例服务实现
 */
class MenuADService
{
public:
	// 保存数据
	uint64_t saveData(const MenuADDTO::Wrapper& dto);

	// 通过ID删除数据
	bool removeData(string id);
};

#endif // !_SAMPLE_SERVICE_

