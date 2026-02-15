#pragma once

#ifndef _UPLOADATTACHMENTDAO_H_
#define _UPLOADATTACHMENTDAO_H_
#include "BaseDAO.h"
#include "../../../domain/do/Meeting/uploadattachment/UploadAttachmentDO.h"

/**
 * 会议文件表数据库操作实现
 */
class UploadAttachmentDAO : public BaseDAO
{
public:
	// 插入数据
	uint64_t insert(const UploadAttachmentDO& iObj);
};

#endif // !_UPLOADATTACHMENTDAO_H_