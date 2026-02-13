
#include "stdafx.h"
#include "RemovePersonService.h"
#include "../../../dao/GroupManagement/GroupManagementDAO/RemovePersonDAO.h"
#include "domain/vo/BaseJsonVO.h"

int RemovePersonService::removeData(const RemovePersonDTO::Wrapper& group_person)
{
	RemovePersonDAO dao;
	return dao.deleteByXgroup_Xperson(group_person);
}
