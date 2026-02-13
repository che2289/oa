
#include "stdafx.h"
#include "DisableUnbanPersonService.h"
#include "../../dao/DisableUnbanPerson/DisableUnbanPersonDAO.h"

bool DisableUnbanPersonService::updateData(const DisableUnbanPersonDTO::Wrapper& dto)
{
	// 组装DO数据
	org_personDO data;
	//data.setId(dto->id.getValue(0));
	//data.setName(dto->name.getValue(""));
	//data.setSex(dto->sex.getValue(""));
	//data.setState(dto->state.getValue(1));
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xstatus, xstatus, Xid, xid)
	// 执行数据修改
	DisableUnbanPersonDAO dao;
	return dao.update(data) == 1;
}

