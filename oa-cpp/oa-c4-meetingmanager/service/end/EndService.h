#pragma once

#ifndef _END_SERVICE_
#define _END_SERVICE_
#include <list>
//#include "domain/vo/sample/SampleVO.h"
//#include "domain/query/sample/SampleQuery.h"
#include "domain/dto/end/EndDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class EndService
{
public:

	// 修改数据
	bool updateData(const EndDTO::Wrapper& dto);

};

#endif // !_END_SERVICE_

