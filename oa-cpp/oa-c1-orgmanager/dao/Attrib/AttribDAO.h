#pragma once

#ifndef _SAMPLE_DAO_
#define _SAMPLE_DAO_
#include "BaseDAO.h"
#include "../../domain/do/Attrib/AttribDO.h"
#include "../../domain/query/Attrib/AttribQuery.h"

/**
 * 示例表数据库操作实现
 */
class AttribDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const AttribQuery::Wrapper& query);
	// 分页查询数据
	list<AttribDO> selectWithPage(const AttribQuery::Wrapper& query);
	// 通过姓名查询数据
	list<AttribDO> selectByName(const string& name);
	// 插入数据
	uint64_t insert(const AttribDO& iObj);
	// 修改数据
	int update(const AttribDO& uObj);
	// 通过ID删除数据
	int deleteById(uint64_t id);
};
#endif // !_SAMPLE_DAO_
