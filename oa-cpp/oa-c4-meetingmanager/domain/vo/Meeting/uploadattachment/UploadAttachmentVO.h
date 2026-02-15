#pragma once

#ifndef _UPLOADATTACHMENTVO_H_
#define _UPLOADATTACHMENTVO_H_

#include "../../../GlobalInclude.h"
#include "../../../dto/meeting/uploadattachment/UploadAttachment.h"

#include OATPP_CODEGEN_BEGIN(DTO)

///**
// * 上传文件信息显示对象   ？？？？好像不需要
// */
//class UploadAttachmentVO : public oatpp::DTO
//{
//	DTO_INIT(UploadAttachmentVO, DTO);
//	// 附件src
//	API_DTO_FIELD(String, url, ZH_WORDS_GETTER("file.field.attachment-url"), true, {});
//	// 附件文字描述
//	API_DTO_FIELD_DEFAULT(String, alt, ZH_WORDS_GETTER("file.field.attachment-alt"));
//};
//
///**
// * 上传文件信息显示VO，用于响应给客户端的Json结果   ？？？？好像不需要
// */
//class UploadAttachmentJsonVO : public JsonVO<UploadAttachmentVO::Wrapper>
//{
//	DTO_INIT(UploadAttachmentJsonVO, JsonVO<UploadAttachmentVO::Wrapper>);
//};

#include OATPP_CODEGEN_END(DTO)

#endif // !_UPLOADATTACHMENTVO_H_