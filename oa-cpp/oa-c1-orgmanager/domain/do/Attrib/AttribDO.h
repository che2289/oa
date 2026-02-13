#pragma once

#ifndef _ATTRIB_DO_
#define _ATTRIB_DO_
#include "../DoInclude.h"

/**
 * 示例数据库实体类
 */
class AttribDO
{
	// 唯一编号
	CC_SYNTHESIZE(uint64_t, id, Id);
	// 名称
	CC_SYNTHESIZE(string, name, Name);
	// 属性
	CC_SYNTHESIZE(string, shuxing, Shuxing);
	// 值
	CC_SYNTHESIZE(int, value, Value);
	//描述
	CC_SYNTHESIZE(string, miaoshu, Miaoshu);
public:
	AttribDO() {
		id = 0;
		name = "";
		shuxing = "";
		value = 0;
		miaoshu = "";
	}
};

#endif // !_SAMPLE_DO_
