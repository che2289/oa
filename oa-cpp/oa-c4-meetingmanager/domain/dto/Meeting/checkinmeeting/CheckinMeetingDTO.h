#pragma once

#ifndef _CHECKINMEETING_DTO_
#define _CHECKINMEETING_DTO_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 定义一个用于会议签到的数据传输模型
 */
class CheckinMeetingDTO : public oatpp::DTO
{
	DTO_INIT(CheckinMeetingDTO, DTO);
	// 会议ID
	API_DTO_FIELD_DEFAULT(String, meetingId, ZH_WORDS_GETTER("meeting.field.id"));
	// 用户名
	API_DTO_FIELD_DEFAULT(String, xcheckinPersonList, ZH_WORDS_GETTER("user.field.name"));
	// 排序号，表示一个会议里的第几个成员
	API_DTO_FIELD_DEFAULT(Int32, xorderColumn, ZH_WORDS_GETTER("user.field.order"));
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_CHECKINMEETING_DTO_