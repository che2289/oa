#pragma once

#ifndef _CHECKINMEETINGCONTROLLER_H_
#define _CHECKINMEETINGCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/dto/Meeting/checkinmeeting/CheckinMeetingDTO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class CheckinMeetingController : public oatpp::web::server::api::ApiController
{
	// 定义控制器访问入口
	API_ACCESS_DECLARE(CheckinMeetingController);
public:
	// 定义新增会议签到记录接口描述
	ENDPOINT_INFO(addCheckinMeeting) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("meeting.post.summary"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}
	// 定义新增会议签到记录接口处理
	ENDPOINT(API_M_POST, "/meeting/checkin-meeting", addCheckinMeeting, BODY_DTO(CheckinMeetingDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execAddCheckinMeeting(dto, authObject->getPayload()));
	}
	
private:
	// 前端只需传入会议ID
	Uint64JsonVO::Wrapper execAddCheckinMeeting(const CheckinMeetingDTO::Wrapper& dto, const PayloadDTO& payload);
};

#include OATPP_CODEGEN_END(ApiController)

#endif // !_CHECKINMEETINGCONTROLLER_H_