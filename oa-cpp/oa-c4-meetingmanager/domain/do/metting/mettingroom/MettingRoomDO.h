#pragma once

#ifndef _MettingRoom_DO_
#define _MettingRoom_DO_
#include "../../DoInclude.h"

/**
 * 示例数据库实体类
 */
class MettingRoomDO
{
	// 编号
	CC_SYNTHESIZE(string,	id		, Ids);
	// name
	CC_SYNTHESIZE(string, name, Names);
	// build
	CC_SYNTHESIZE(string,	build	, Build);
	// floor
	CC_SYNTHESIZE(int, floor	, Floor);
	// capacity
	CC_SYNTHESIZE(int, capacity, capacity);
	// roomnumber
	CC_SYNTHESIZE(string,	roomnumber, Roomnumber);
	// dis
	CC_SYNTHESIZE(int, dis		, Dis);
	// device
	CC_SYNTHESIZE(string,	device	, Device);
	// status
	CC_SYNTHESIZE(bool,		available, Available);
public:
	MettingRoomDO() {
		id = "";

		name = "";

		build = "";

		floor = 1;

		capacity = 50;

		roomnumber = "";

		dis = 0;

		device = "";

		available = true;
	}
};

class MettingBuildDO {
	// build
	CC_SYNTHESIZE(string, build, Build);
public:
	MettingBuildDO() {
		build = "";
	}
};

#endif // !_MettingRoom_DO_
