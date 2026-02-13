
#include "stdafx.h"
#include "AddPersonService.h"
#include "../../../dao/GroupManagement/GroupManagementDAO/AddPersonDAO.h"

uint64_t AddPersonService::saveData(const AddPersonDTO::Wrapper& dto)
{
	uint64_t accept_row = 0;
	AddPersonDAO dao;
	// 组装DO数据
	OrgGroupPersonlistDO data;
	// 	data.setName(dto->name.getValue(""));
	// 	data.setSex(dto->sex.getValue(""));
	// 	data.setAge(dto->age.getValue(1));
	for (int i = 0; i < dto->xpersonList->size(); i++) {
		ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Group_xid, GROUP_XID, Xperson_list, xpersonList[i]);
		// 执行数据添加
		accept_row += dao.insert(data);
	}
	return accept_row;
}
