
#include "stdafx.h"
#include "RemovePersonDAO.h"
#include "RemovePersonMapper.h"
#include <sstream>

int RemovePersonDAO::deleteByXgroup_Xperson(const RemovePersonDTO::Wrapper& group_person)
{
	string sql = "DELETE FROM `org_group_personlist` WHERE `GROUP_XID`=? AND `xpersonList`=?";
	int res = 0;
	for (int i = 0; i < group_person->xpersonList->size(); i++) {
		res += sqlSession->executeUpdate(sql, "%s%s", group_person->GROUP_XID.getValue(""), group_person->xpersonList[i].getValue(""));
	}
	return res;
}