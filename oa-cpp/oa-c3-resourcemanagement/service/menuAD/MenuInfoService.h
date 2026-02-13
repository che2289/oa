#pragma once

#ifndef _MENUINFO_SERVICE_
#define _MENUINFO_SERVICE_
#include <list>
#include "domain/vo/menuinfo/MenuInfoVO.h"
#include "domain/query/menuinfo/MenuInfoQuery.h"
#include "domain/dto/menuinfo/MenuInfoDTO.h"

/**
 *  * 参考arch-demo写的，但是36行的数据格式可能有问题，同时MenuInfoService.h里的是分页查询的逻辑可能需要以后具体改
 */
class MenuInfoService
{
public:
	// 分页查询所有数据
	MenuInfoPageDTO::Wrapper listAll(const MenuInfoQuery::Wrapper& query);
	// 保存数据
	uint64_t saveData(const MenuInfoDTO::Wrapper& dto);
	// 修改数据
	bool updateData(const MenuInfoDTO::Wrapper& dto);
	// 通过ID删除数据
	bool removeData(uint64_t menu_id);
	// 查询数据
	MenuInfoDTO::Wrapper queryData(const string& menu_id);
};

#endif // !_MENUINFO_SERVICE_

