#pragma once

#ifndef _ACRE_DAO_
#define _ACRE_DAO_
#include "BaseDAO.h"
//#include "../../domain/do/sample/SampleDO.h"
//#include "../../domain/query/sample/SampleQuery.h"

/**
 * 示例表数据库操作实现
 */
class AcReDAO : public BaseDAO
{
public:

	// 插入数据
	uint64_t insertAccept(const string& meetingId, const string& userId);
	uint64_t insertRefuse(const string& meetingId, const string& userId);

private:
	uint64_t countAccept(const string& meetingId);
	uint64_t countRefuse(const string& meetingId);

};
#endif // !_ACRE_DAO_
