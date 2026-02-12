
#pragma once
#ifndef _GETROLE_DO_
#define _GETROLE_DO_
#include"../DoInclude.h"
#include"../../GlobalInclude.h"

class GetRoleDO
{
	//三个参数，第二个参数：实际的类成员变量名，用于存储对象的唯一标识符，内部使用
	// 第三个：属性的名称，通常用于生成访问器和修改器，外部使用

	//角色描述
	CC_SYNTHESIZE(string, name, Name);
	// ?¨??±à??
	CC_SYNTHESIZE(string, key, Key);
	// ?????è??
	CC_SYNTHESIZE(string, refer, Refer);
public:
	GetRoleDO() {
		name = "";
		key = "";
		refer = "";
	}

};


#endif // !_GETROLE_DO_
