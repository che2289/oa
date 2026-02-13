
#include "stdafx.h"
#include "ChangePersonProfileService.h"
#include "../../dao/ChangePersonProfile/ChangePersonProfileDAO.h"

bool ChangePersonProfileService::updateData(const ChangePersonProfileDTO::Wrapper& dto)
{
	// 组装DO数据
	org_personDO data;
	//data.setId(dto->id.getValue(0));
	//data.setName(dto->name.getValue(""));
	//data.setSex(dto->sex.getValue(""));
	//data.setState(dto->state.getValue(1));
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xicon, xicon, XiconLdpi, xiconLdpi, XiconMdpi, xiconMdpi, Xid, xid)
	// 执行数据修改
	ChangePersonProfileDAO dao;
	return dao.update(data) == 1;
}

