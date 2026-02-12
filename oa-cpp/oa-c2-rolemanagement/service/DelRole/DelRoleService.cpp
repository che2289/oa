
#include "stdafx.h"
#include"DelRoleService.h"
#include"../../dao/RoleManagementDAO/RoleManagementDAO.h"

bool DelRoleService::removeData(string id)
{
	DelRoleDAO dao;
	return dao.deleteById(id) == 1;
}
