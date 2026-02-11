
#include "stdafx.h"
#include "AddPersonDAO.h"
#include "AddPersonMapper.h"
#include <sstream>

uint64_t AddPersonDAO::insert(const OrgGroupPersonlistDO& iObj)
{
	string sql = "INSERT INTO `org_group_personlist` (`GROUP_XID`, `xpersonList`, `xorderColumn`) VALUES (?, ?, ?)";
	return sqlSession->executeUpdate(sql, "%s%s%i", iObj.getGroup_xid(), iObj.getXperson_list(), iObj.getXorder_column());
}