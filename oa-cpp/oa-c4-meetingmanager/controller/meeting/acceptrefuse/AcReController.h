#pragma once

#ifndef _ACRECONTROLLER_H_
#define _ACRECONTROLLER_H_

#include "oatpp-swagger/Types.hpp"
#include "domain/vo/BaseJsonVO.h"
//#include "domain/query/PageQuery.h"
#include "domain/dto/PayloadDTO.h"
#include "domain/vo/BaseJsonVO.h"
#include "../../../domain/GlobalInclude.h"
#include "../../../service/acceptrefuse/AcReService.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class AcReController : public oatpp::web::server::api::ApiController
{
	// 定义控制器访问入口
	API_ACCESS_DECLARE(AcReController);
	// 3 定义接口
public:

	//accept
	ENDPOINT_INFO(acceptMeeting) {
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("meeting.accept"), StringJsonVO::Wrapper);
		API_DEF_ADD_PATH_PARAMS(String, "id", ZH_WORDS_GETTER("meeting.field.xid"), 1, true);
	}
	API_HANDLER_ENDPOINT_AUTH(API_M_POST, "/meeting/accpet/{id}", acceptMeeting, PATH(String, id), execAcceptMeeting(id, authObject->getPayload()));

	//refuse
	ENDPOINT_INFO(refuseMeeting) {
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("meeting.refuse"), StringJsonVO::Wrapper);
		API_DEF_ADD_PATH_PARAMS(String, "id", ZH_WORDS_GETTER("meeting.field.xid"), 1, true);
	}
	API_HANDLER_ENDPOINT_AUTH(API_M_POST, "/meeting/refuse/{id}", refuseMeeting, PATH(String, id), execRefuseMeeting(id, authObject->getPayload()));


private: // 定义接口执行函数

	// 接受
	StringJsonVO::Wrapper execAcceptMeeting(const string& xid, const PayloadDTO& payload);
	//拒绝会议
	//meetingXid例子 v=-4a1e76a 64位,payload获得用户id
	StringJsonVO::Wrapper execRefuseMeeting(const string& xid, const PayloadDTO& payload);

};




#include OATPP_CODEGEN_END(ApiController)

#endif // !_ACRECONTROLLER_H_