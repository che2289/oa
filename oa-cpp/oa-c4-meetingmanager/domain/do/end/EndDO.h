#pragma once

#ifndef _END_DO_
#define _END_DO_
#include "../DoInclude.h"

/**
 * 数据库实体类
 */
class EndDO
{
	//会议Id
	CC_SYNTHESIZE(string, meetingId, MeetingId);
	//会议室id
	CC_SYNTHESIZE(string, roomId, RoomId);
	//结束时间
	CC_SYNTHESIZE(string, actualCompletedTime, ActualCompletedTime);
public:
	EndDO() {
		meetingId = "";
		roomId = "";
		actualCompletedTime = "";
	}
};

#endif // !_END_DO_
