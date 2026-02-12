#include"stdafx.h"
#include"dao/put/PersonMember/PersonMemberDAO.h"

uint64_t PersonMemberDAO::insert(const PersonMemberDO& iObj)
{
	string sql = "INSERT INTO org_role_grouplist (ROLE_XID,xgroupList,xorderColumn) VALUES(?,?,?)";
	return sqlSession->executeUpdate(sql, "%s%s%d", iObj.getROLE_XID(),iObj.getXgroupList(), iObj.getXorderColumn());
}

int PersonMemberDAO::deleteById(uint64_t ROLE_XID)
{
	string sql = "DELETE FROM org_role_grouplist WHERE ROLE_XID=?";
	return sqlSession->executeUpdate(sql, "%ull", ROLE_XID);
}