#pragma once

#ifndef _UPLOADATTACHMENT_DTO_
#define _UPLOADATTACHMENT_DTO_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 定义一个新增上传会议附件记录的数据传输模型
 */
class UploadAttachmentDTO : public oatpp::DTO
{
	DTO_INIT(UploadAttachmentDTO, DTO);
	// 文件编号
	API_DTO_FIELD_DEFAULT(String, xid, ZH_WORDS_GETTER("meeting.file.field.xid"));
	// 文件创建时间
	API_DTO_FIELD_DEFAULT(String, xcreateTime, ZH_WORDS_GETTER("meeting.file.field.xcreateTime"));
	// 序列号
	API_DTO_FIELD_DEFAULT(String, xsequence, ZH_WORDS_GETTER("meeting.file.field.xsequence"));
	// 文件更新时间
	API_DTO_FIELD_DEFAULT(String, xupdateTime, ZH_WORDS_GETTER("meeting.file.field.xupdateTime"));
	// 文件所在深度
	API_DTO_FIELD_DEFAULT(Int32, xdeepPath, ZH_WORDS_GETTER("meeting.file.field.xdeepPath"));
	// 文件扩展名，如pdf
	API_DTO_FIELD_DEFAULT(String, xextension, ZH_WORDS_GETTER("meeting.file.field.xextension"));
	// 最后执行更新文件的用户
	API_DTO_FIELD_DEFAULT(String, xlastUpdatePerson, ZH_WORDS_GETTER("meeting.file.field.xlastUpdatePerson"));
	// 文件最近更新时间
	API_DTO_FIELD_DEFAULT(String, xlastUpdateTime, ZH_WORDS_GETTER("meeting.file.field.xlastUpdateTime"));
	// 文件大小
	API_DTO_FIELD_DEFAULT(Int64, xlength, ZH_WORDS_GETTER("meeting.file.field.xlength"));
	// 会议ID
	API_DTO_FIELD_DEFAULT(String, xmeeting, ZH_WORDS_GETTER("meeting.file.field.xmeeting"));
	// 文件名称
	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("meeting.file.field.xname"));
	// 文件存储路径 在FastDFS
	API_DTO_FIELD_DEFAULT(String, xstorage, ZH_WORDS_GETTER("meeting.file.field.xstorage"));
	// 是否是会议总结或相关摘要
	API_DTO_FIELD_DEFAULT(Boolean, xsummary, ZH_WORDS_GETTER("meeting.file.field.isSummary"));
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_UPLOADATTACHMENT_DTO_