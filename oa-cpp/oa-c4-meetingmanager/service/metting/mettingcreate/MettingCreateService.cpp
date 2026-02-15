
#include "stdafx.h"
#include "MettingCreateService.h"
#include "../../../dao/metting/mettingcreate/MettingCreateDAO.h"

uint64_t MettingCreateService::saveData(const MettingCreateDTO::Wrapper& dto)
{
	// 组装DO数据
	MettingCreateDO data;
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, MettingType, mettingtype, Date, date1, TimeStart, timestart, TimeEnd, timeend, MettingRoom, mettingroom, MettingTitle, mettingtitle, Member, member, Hoster, hoster, Department, department, Description, description);
	// 执行数据添加
	MettingCreateDAO dao;
	return dao.insert(data);
}
