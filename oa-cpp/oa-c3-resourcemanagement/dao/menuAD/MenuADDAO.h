#pragma once

#ifndef _MENU_DAO_
#define _MENU_DAO_
#include "BaseDAO.h"
#include "../../domain/do/menuinfo/MenuInfoDO.h"

/**
 * 示例表数据库操作实现
 */
class MenuDAO : public BaseDAO
{
public:
	// 插入数据
	uint64_t Insert(const MenuInfoDO& iObj);

	// 查找子菜单
	list<MenuInfoDO> SearchChild(string id);

	// 通过ID删除数据
	int DeleteById(string id);

	
};
#endif // !_SAMPLE_DAO_
