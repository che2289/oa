#pragma once

#ifndef _CHECKINMEETING_H_
#define _CHECKINMEETING_H_

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
	// 用户ID
	API_DTO_FIELD_DEFAULT(String, userId, ZH_WORDS_GETTER("user.field.id"));
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_CHECKINMEETING_H_