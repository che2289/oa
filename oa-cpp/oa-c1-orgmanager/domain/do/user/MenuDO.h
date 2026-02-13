#pragma once

#ifndef _SAMPLEMENUDO_H_
#define _SAMPLEMENUDO_H_

#include "../DoInclude.h"
/**
 * 测试菜单数据库实体
 */
class MenuDO
{
	// 唯一编号
	CC_SYNTHESIZE(string, id, Id);
	// 节点文本描述
	CC_SYNTHESIZE(string, text, Text);
	// 节点文本描述
	CC_SYNTHESIZE(string, icon, Icon);
	// 路由
	CC_SYNTHESIZE(string, href, Href);
	// 父节点ID
	CC_SYNTHESIZE(string, parentId, ParentId);
public:
	MenuDO() {}
	MenuDO(string id, string text, string icon, string href, string parentId)
	{
		this->id = id;
		this->text = text;
		this->icon = icon;
		this->href = href;
		this->parentId = parentId;
	}
};

#endif // !_SAMPLEMENUDO_H_