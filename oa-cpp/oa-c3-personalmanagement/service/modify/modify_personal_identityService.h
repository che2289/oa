#pragma once

#ifndef _MODIFY_PERSONAL_IDENTITYSERVICE_
#define _MODIFY_PERSONAL_IDENTITYSERVICE_
#include <list>
#include "../../domain/dto/modify/modify_personal_identityDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class modify_personal_identityService
{
public:

	// 修改数据
	bool updateData(const modify_personal_identityDTO::Wrapper& dto);

};

#endif // !_MODIFY_PERSONAL_identitySERVICE_

