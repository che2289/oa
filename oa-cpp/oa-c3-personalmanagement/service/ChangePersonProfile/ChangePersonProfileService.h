#pragma once

#ifndef _CHANGEPERSONPROFILE_SERVICE_
#define _CHANGEPERSONPROFILE_SERVICE_
#include <list>

#include "domain/dto/ChangePersonProfile/ChangePersonProfileDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class ChangePersonProfileService
{
public:

	// 修改数据
	bool updateData(const ChangePersonProfileDTO::Wrapper& dto);

};

#endif // !_SAMPLE_SERVICE_