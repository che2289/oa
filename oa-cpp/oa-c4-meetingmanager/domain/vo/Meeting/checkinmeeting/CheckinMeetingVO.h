#pragma once

#ifndef _CHECKINMEETINGVO_H_
#define _CHECKINMEETINGVO_H_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 定义一个签到结果显示JsonVO对象，用于响应给客户端
 */
class CheckinMeetingJsonVO : JsonVO<CheckinMeetingDTO::Wrapper>
{
	DTO_INIT(CheckinMeetingJsonVO, JsonVO<CheckinMeetingDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_CHECKINMEETINGVO_H_