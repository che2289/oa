#pragma once

#ifndef _ORGNAMETREEMAPPER_H_
#define _ORGNAMETREEMAPPER_H_

#include "tree/TreeNodeMapper.h"
#include "domain/do/OrgNameTreeDO.h"
#include "domain/dto/OrgNameTreeDTO.h"

/**
 * 演示菜单数据字段匹配实现
 */
class OrgNamerTreeMapper : public TreeNodeMapper<OrgNameTreeDO>
{
public:

	shared_ptr<TreeNode> objectMapper(OrgNameTreeDO* source) const override
	{
		// 创建结果数据对象
		auto res = make_shared<OrgNameTreeDTO>();
		// 计算层级结构属性映射
		res->_id(source->getXid());
		res->_pid(source->getXsuperior());
		// 扩展属性映射
		res->xid = source->getXid();
		res->xname = source->getXname();
		res->xunique = source->getXunique();
		res->xlevel = source->getXlevel();
		res->xlevelname = source->getXlevelname();
		res->xlevelOrderNumber = source->getXlevelOrderNumber();

		return res;
	}
};

#endif // ! _ORGNAMETREEMAPPER_H_