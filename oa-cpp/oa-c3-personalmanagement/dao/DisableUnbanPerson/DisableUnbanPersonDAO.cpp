
#include "stdafx.h"
#include "DisableUnbanPersonDAO.h"
#include "DisableUnbanPersonMapper.h"
#include <sstream>

//定义条件解析宏，减少重复代码
//#define SAMPLE_TERAM_PARSE(query, sql) \
//SqlParams params; \
//sql<<" WHERE 1=1"; \
//if (query->name) { \
//	sql << " AND `name`=?"; \
//	SQLPARAMS_PUSH(params, "s", std::string, query->name.getValue("")); \
//} \
//if (query->sex) { \
//	sql << " AND sex=?"; \
//	SQLPARAMS_PUSH(params, "s", std::string, query->sex.getValue("")); \
//} \
//if (query->age) { \
//	sql << " AND age=?"; \
//	SQLPARAMS_PUSH(params, "i", int, query->age.getValue(0)); \
//}


int DisableUnbanPersonDAO::update(const org_personDO& uObj)
{
	string sql = "UPDATE `org_person` SET `xstatus`=? WHERE `xid`=?";
	return sqlSession->executeUpdate(sql, "%s%s", uObj.getXstatus(), uObj.getXid());
}

//int SampleDAO::update(const SampleDO& uObj)
//{
//	string sql = "UPDATE `sample` SET `name`=?, `sex`=?, `age`=? WHERE `id`=?";
//	return sqlSession->executeUpdate(sql, "%s%s%i%ull", uObj.getName(), uObj.getSex(), uObj.getAge(), uObj.getId());
//}
//
//
