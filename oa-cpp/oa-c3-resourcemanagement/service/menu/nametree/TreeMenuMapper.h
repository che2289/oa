#pragma once

#ifndef _TREEMENUMAPPER_H_
#define _TREEMENUMAPPER_H_

#include "tree/TreeNodeMapper.h"
#include "domain/do/menuinfo/MenuInfoDO.h"
#include "domain/dto/mymenu/nametree/MyMenuInfoDTO.h"

/**
 * 演示菜单数据字段匹配实现
 */
class TreeMenuMapper : public TreeNodeMapper<MenuInfoDO>
{
public:
	shared_ptr<TreeNode> objectMapper(MenuInfoDO* source) const override
	{
		// 创建结果数据对象
		auto res = make_shared<MyMenuInfoDTO>();
		// 计算层级结构属性映射
		res->_id(source->getMenu_Id());
		res->_pid(source->getParent_Id());
		// 扩展属性映射
		res->menu_id = (source->getMenu_Id());
		res->menu_name = (source->getMenu_Name());
		res->parent_id = source->getParent_Id();
		res->level = source->getLevel();
		res->icon = source->getIcon();
		return res;
	}
};

#endif // !_TREEMENUMAPPER_H_