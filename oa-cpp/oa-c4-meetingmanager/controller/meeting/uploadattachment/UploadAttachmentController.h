#pragma once

#ifndef _UPLOADATTACHMENTCONTROLLER_H_
#define _UPLOADATTACHMENTCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "ApiHelper.h"
#include "domain/dto/Meeting/uploadattachment/UploadAttachmentDTO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class UploadAttachmentController : public oatpp::web::server::api::ApiController
{
	// 定义控制器访问入口
	API_ACCESS_DECLARE(UploadAttachmentController);
public:
	// 定义一个上传会议文件接口
	// 定义描述
	ENDPOINT_INFO(uploadMeetingFile) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("meeting.file.upload.summary"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
	}
	// 定义端点
	ENDPOINT(API_M_POST, "/meeting/file/upload", uploadMeetingFile, REQUEST(std::shared_ptr<IncomingRequest>, request), API_HANDLER_AUTH_PARAME) {
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execUploadMeetingFile(request, authObject->getPayload()));
	}

private:
	StringJsonVO::Wrapper execUploadMeetingFile(std::shared_ptr<IncomingRequest> request, const PayloadDTO& payload);
};

#include OATPP_CODEGEN_END(ApiController)

#endif // !_UPLOADATTACHMENTCONTROLLER_H_