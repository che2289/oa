#pragma once

#ifndef _ORGMEM_SERVICE_
#define _ORGMEM_SERVICE_
#include <list>
#include "domain/vo/OrgMemVO.h"
//#include "domain/query/sample/SampleQuery.h"
#include "domain/dto/OrgMemDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class OrgMemService
{

public:
	bool addData(string orgID, string personID);
	// 通过ID删除数据
	bool removeData(string orgID, string personID);
};
class OrgJobService
{

public:
	// 通过ID删除数据
	bool removeData(string personID, string dutyID);
	bool addData(string personID, string dutyID);
};

#endif // !_SAMPLE_SERVICE_

