#pragma once
#ifndef _USERDO_H_
#define _USERDO_H_

#include "../DoInclude.h"
/**
 * 测试菜单数据库实体
 */
class UserDO
{
	// 人员名称
	CC_SYNTHESIZE(string, xname, Xname);
	// 人员工号
	CC_SYNTHESIZE(int, xorderNumber, XorderNumber);
	// 手机号码
	CC_SYNTHESIZE(string, xmobile, Xmobile);
	// 邮件地址
	CC_SYNTHESIZE(string, xmail, Xmail);
	//// 个人编码
	//CC_SYNTHESIZE(string, xid, Xid);
	//群组编码
	CC_SYNTHESIZE(string, groupXid, GROUP_XID);
public:
	/*UserDO() {}
	UserDO(string id, string name, string phone, string mail)
	{
		this->id = id;
		this->name = name;
		this->phone = phone;
		this->mail = mail;
	}*/
	UserDO() {
		xorderNumber = 0;
		xname = "";
		xmobile = "";
		xmail = "";
		//xid = "";
		groupXid = "";
	}
};

#endif // !_USERDO_H_