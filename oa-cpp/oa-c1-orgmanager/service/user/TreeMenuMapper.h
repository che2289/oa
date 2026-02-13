#pragma once

#ifndef _TREEMENUMAPPER_H_
#define _TREEMENUMAPPER_H_

#include "tree/TreeNodeMapper.h"
#include "domain/do/user/MenuDO.h"
#include "domain/dto/user/MenuDTO.h"

/**
 * 演示菜单数据字段匹配实现
 */
class TreeMenuMapper : public TreeNodeMapper<MenuDO>
{
public:
	shared_ptr<TreeNode> objectMapper(MenuDO* source) const override
	{
		// 创建结果数据对象
		auto res = make_shared<MenuDTO>();
		// 计算层级结构属性映射
		res->_id(source->getId());
		res->_pid(source->getParentId());
		// 扩展属性映射
		res->text = source->getText();
		res->icon = source->getIcon();
		res->href = source->getHref();
		return res;
	}
};

#endif // !_TREEMENUMAPPER_H_