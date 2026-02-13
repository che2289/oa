#pragma once

#ifndef _ORGMEM_DO_
#define _ORGMEM_DO_
#include "../do/DoInclude.h"

/**
 * 示例数据库实体类
 */
class OrgMemDO
{
	// 编号
	CC_SYNTHESIZE(uint64_t, id, Id);
	// 姓名
	CC_SYNTHESIZE(string, name, Name);
	// 性别
	CC_SYNTHESIZE(string, sex, Sex);
	// 年龄
	CC_SYNTHESIZE(int, age, Age);
public:
	OrgMemDO() {
		id = 0;
		name = "";
		sex = "";
		age = -1;
	}
};

#endif // !_SAMPLE_DO_
