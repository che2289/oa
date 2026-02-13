#include "stdafx.h"
#include "ModifyGroupInfoService.h"
#include "domain/dto/group/Group_DTO.h"
#include <dao/group/GroupDAO.h>

bool ModifyGroupInfoService::updateData(const Group_DTO::Wrapper& dto)
{
	// 组装DO数据
	GroupDO data;
	// 	data.setId(dto->id.getValue(0));
	// 	data.setName(dto->name.getValue(""));
	// 	data.setSex(dto->sex.getValue(""));
	// 	data.setAge(dto->age.getValue(1));
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xname, xname, Xdescription, xdescription, Xid, xid)
		// 执行数据修改
		GroupDAO dao;
	return dao.update(data) == 1;
}

