#pragma once
#ifndef _PERSONMEMBER_DO_
#define _PERSONMEMBER_DO_

#include "Macros.h"
#include <string>
#include <list>
#include "domain/DO/DoInclude.h"
using namespace std;

class PersonMemberDO
{
	// ±àºÅ
	CC_SYNTHESIZE(string, role_xid, ROLE_XID);
	CC_SYNTHESIZE(string, xgroupList, XgroupList);
	CC_SYNTHESIZE(int, xorderColumn, XorderColumn);

public:
	PersonMemberDO() {
		role_xid = "PersonMember.field.GROUP_XID";
		xgroupList = "PersonMember.field.xgroupList";
		xorderColumn = 1;
	}
};

#endif // !_PERSONMEMBER_DO_