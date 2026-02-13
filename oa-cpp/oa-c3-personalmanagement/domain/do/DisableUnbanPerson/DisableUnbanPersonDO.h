#pragma once

#ifndef _DISABLEUNBANPERSON_DO_
#define _DISABLEUNBANPERSON_DO_
#include "../DoInclude.h"

/**
 * 示例数据库实体类
 */
class DisableUnbanPersonDO
{
	// 编号
	CC_SYNTHESIZE(uint64_t, id, Id);

	// 状态
	CC_SYNTHESIZE(uint64_t, state, State);
public:
	DisableUnbanPersonDO() {
		id = 0;
		state = 1;
	}
};

#endif // !_SAMPLE_DO_
