#pragma once

#ifndef _MENUINFO_DAO_
#define _MENUINFO_DAO_
#include "BaseDAO.h"
#include "../../../domain/do/menuinfo/MenuInfoDO.h"
#include "../../../domain/query/mymenu/nametree/MyMenuInfoQuery.h"

/**
 * 示例表数据库操作实现
 */
class MenuInfoDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const MyMenuInfoQuery::Wrapper& query);
	// 分页查询数据
	list<MenuInfoDO> selectWithPage(const MyMenuInfoQuery::Wrapper& query);
	 //通过姓名查询数据
	//list<MenuInfoDO> selectByName(const string& name);
	//// 插入数据
	//uint64_t insert(const MenuInfoDO& iObj);
	//// 修改数据
	//int update(const MenuInfoDO& uObj);
	//// 通过ID删除数据
	//int deleteById(uint64_t aid);
	//list<MenuInfoDO> selectAll();
};
#endif // !_SAMPLE_DAO_
