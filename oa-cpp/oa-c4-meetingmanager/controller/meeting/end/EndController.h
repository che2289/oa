#pragma once

#ifndef _ENDCONTROLLER_H_
#define _ENDCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "../../../service/end/EndService.h"
//#include "domain/vo/room/RoomInfoVO.h"
#include "domain/dto/end/EndDTO.h"
#include OATPP_CODEGEN_BEGIN(ApiController)

class EndController : public oatpp::web::server::api::ApiController
{
	// 定义控制器访问入口
	API_ACCESS_DECLARE(EndController);
	// 3 定义接口
public:

	/*
	// 3.1 定义修改接口描述
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("sample.put.summary"), modifySample, Uint64JsonVO::Wrapper);
	// 3.2 定义修改接口处理
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/sample", modifySample, BODY_DTO(SampleDTO::Wrapper, dto), execModifySample(dto));
	*/

	//end
	ENDPOINT_INFO(endMeeting) {
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("meeting.end"), StringJsonVO::Wrapper);
		/*API_DEF_ADD_PATH_PARAMS(String, "meetingId", ZH_WORDS_GETTER("meeting.field.xid"), 1, true);*/
	}
	API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/meeting/end", endMeeting, BODY_DTO(EndDTO::Wrapper, dto), execEndMeeting(dto));


private: // 定义接口执行函数

	//结束会议
	StringJsonVO::Wrapper execEndMeeting(const EndDTO::Wrapper& dto);

};




#include OATPP_CODEGEN_END(ApiController)

#endif // !_ENDCONTROLLER_H_