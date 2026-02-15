#pragma once

#ifndef _MeetingRoom_SERVICE_
#define _MeetingRoom_SERVICE_
#include <list>
#include "domain/vo/meetingroom/MeetingroomVO.h"
#include "domain/dto/meetingroom/MeetingroomDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class MeetingRoomService
{
public:
	// 修改数据
	bool updateData(const MeetingroomDTO::Wrapper& dto);
	// 通过name删除数据
	bool removeData(const string& name);
};

#endif // !_MeetingRoom_SERVICE_

