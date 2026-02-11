#pragma once
#ifndef _USERDO_H_
#define _USERDO_H_

#include "../DoInclude.h"
/**
 * 菜单数据库实体
 */
class UserDO
{
	// 人员名称
	CC_SYNTHESIZE(string, name, Name);
	// 人员工号
	CC_SYNTHESIZE(uint64_t, id, Id);
	// 手机号码
	CC_SYNTHESIZE(string, phone, Phone);
	// 邮件地址
	CC_SYNTHESIZE(string, mail, Mail);
public:
	UserDO() {
		id = 0;
		name = "";
		phone = "";
		mail = "";
	}
};

#endif // !_USERDO_H_