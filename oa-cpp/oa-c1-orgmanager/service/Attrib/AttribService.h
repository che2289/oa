#pragma once

#ifndef _ATTRIB_SERVICE_
#define _ATTRIB_SERVICE_
#include <list>
#include "domain/vo/Attrib/AttribVO.h"
#include "domain/query/Attrib/AttribQuery.h"
#include "domain/dto/Attrib/AttribDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class AttribService
{
public:
	// 分页查询所有数据
	AttribPageDTO::Wrapper listAll(const AttribQuery::Wrapper& query);
	// 保存数据
	uint64_t saveData(const AttribDTO::Wrapper& dto);
	// 修改数据
	bool updateData(const AttribDTO::Wrapper& dto);
	// 通过ID删除数据
	bool removeData(uint64_t id);
};

#endif // !_SAMPLE_SERVICE_

