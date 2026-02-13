#pragma once

#ifndef _REMOVEPERSON_SERVICE_
#define _REMOVEPERSON_SERVICE_
#include <list>
#include "domain/dto/del/RemovePersonDTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class RemovePersonService
{
public:
	// 通过xpersonList删除数据
	int removeData(const RemovePersonDTO::Wrapper& dto);
};

#endif // !_REMOVEPERSON_SERVICE_

