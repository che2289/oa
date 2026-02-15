#pragma once

#ifndef _ACRE_SERVICE_
#define _ACRE_SERVICE_
#include <list>
//#include "domain/vo/sample/SampleVO.h"
//#include "domain/query/sample/SampleQuery.h"
//#include "domain/dto/sample/SampleDTO.h"
#include "domain/do/DoInclude.h"
/**
 * 示例服务实现，演示基础的示例服务实现
 */
class AcReService
{
public:

	// 保存数据
	uint64_t saveDataAccept(const string& meetingId, const string& userId);
	uint64_t saveDataRefuse(const string& meetingId, const string& userId);

};

#endif // !_ACRE_SERVICE_

