#pragma once

#ifndef _UPLOADATTACHMENT_H_
#define _UPLOADATTACHMENT_H_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 定义一个新增上传会议附件记录的数据传输模型
 */
class UploadAttachmentDTO : public oatpp::DTO
{
	DTO_INIT(UploadAttachmentDTO, DTO);
	// 做此上传操作的用户ID
	API_DTO_FIELD(String, xlastUpdatePerson, ZH_WORDS_GETTER("user.field.id"), true, {"123"});
	// 会议ID
	API_DTO_FIELD(String, xmeeting, ZH_WORDS_GETTER("meeting.file.field.id"), true, {"123"});
	// 文件名称
	API_DTO_FIELD(String, xname, ZH_WORDS_GETTER("meeting.file.field.filename"), true, {"1.txt"});
	// 是否是会议总结或相关摘要
	API_DTO_FIELD(Boolean, xsummary, ZH_WORDS_GETTER("meeting.file.field.isSummary"), true, {false});
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_UPLOADATTACHMENT_H_