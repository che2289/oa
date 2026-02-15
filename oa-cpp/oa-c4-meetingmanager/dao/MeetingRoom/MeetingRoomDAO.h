#pragma once

#ifndef _MeetingRoom_DAO_
#define _MeetingRoom_DAO_
#include "BaseDAO.h"
#include "../../domain/do/MeetingRoom/MeetingRoomDO.h"


/**
 * 数据库操作实现
 */
class MeetingRoomDAO : public BaseDAO
{
public:
	// 修改数据
	int update(const MeetingRoomDO& uObj);
	// 通过ID删除数据
	int deleteByName(string name);
};
#endif // !_MeetingRoom_
