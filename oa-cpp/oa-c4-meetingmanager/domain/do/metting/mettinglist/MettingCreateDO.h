#pragma once

#ifndef _MettingList_DO_
#define _MettingList_DO_
#include "../../DoInclude.h"

/**
 * 数据库实体类
 */
class MettingListDO
{
	// name
	CC_SYNTHESIZE(string, name,			Names);
	// date
	CC_SYNTHESIZE(string, date,			Dates);
	// timestart
	CC_SYNTHESIZE(string, timestart,	Timestart);
	// timeend
	CC_SYNTHESIZE(string, timeend, Timeend);
	// title
	CC_SYNTHESIZE(string, title, Title);
	// room
	CC_SYNTHESIZE(string, mtroom, Mtroom);
public:
	MettingListDO() {
		name = "";
		date = "";
		timestart = "";
		timeend = "";
		title = "";
		mtroom = "";
	}
};

#endif // !_MettingList_DO_
