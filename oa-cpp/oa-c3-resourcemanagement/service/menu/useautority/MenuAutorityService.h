#pragma once

#ifndef _MENUAUTORITY_SERVICE_
#define _MENUAUTORITY_SERVICE_
#include <list>
#include "domain/vo/mymenu/useautority/MenuUseAutorityVO.h"
#include "domain/query/mymenu/useautority/MenuUseAutorityQuery.h"
#include "domain/dto/mymenu/useautority/MenuUseAutorityDTO.h"
#include "domain/do/org_role_menulistDO/org_role_menulistDO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class MenuAutorityService
{
public:
	// 分页查询所有数据
	MenuUseAutorityPageDTO::Wrapper listAll(const MenuUseAutorityQuery::Wrapper& query);
	//// 保存数据
	//uint64_t saveData(const MenuUseAutorityDTO::Wrapper& dto);
	//// 修改数据
	//bool updateData(const MenuUseAutorityDTO::Wrapper& dto);
	//// 通过ID删除数据
	//bool removeData(uint64_t id);
};

#endif // !_SAMPLE_SERVICE_















