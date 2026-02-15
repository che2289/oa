#pragma once

#ifndef _MettingRoomList_DO_
#define _MettingRoomList_DO_
#include "../../DoInclude.h"

/**
 * 示例数据库实体类
 */
class MettingRoomListDO
{
	// 编号
	CC_SYNTHESIZE(string, id, Ids);
	// name
	CC_SYNTHESIZE(string, name, Names);
	// build
	CC_SYNTHESIZE(string, build, Build);
	// floor
	CC_SYNTHESIZE(int, floor, Floor);
	// capacity
	CC_SYNTHESIZE(int, capacity, capacity);
	// roomnumber
	CC_SYNTHESIZE(string, roomnumber, Roomnumber);
	// dis
	CC_SYNTHESIZE(int, dis, Dis);
	// device
	CC_SYNTHESIZE(string, device, Device);
	// status
	CC_SYNTHESIZE(bool, available, Available);
	// 
	CC_SYNTHESIZE(string, meeting, Meetings);
public:
	MettingRoomListDO() {
		id = "";

		name = "";

		build = "";

		floor = 1;

		capacity = 50;

		roomnumber = "";

		dis = 0;

		device = "";

		available = true;

		meeting = "";
	}
};


#endif // !_MettingRoomList_DO_
