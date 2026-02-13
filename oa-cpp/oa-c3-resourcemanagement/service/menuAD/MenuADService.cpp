
#include "stdafx.h"
#include "MenuADService.h"
#include "../../dao/menuAD/MenuADDAO.h"
#include<queue>



uint64_t MenuADService::saveData(const MenuADDTO::Wrapper& dto)
{
	// 组装DO数据
	MenuInfoDO data;
// 	data.setName(dto->name.getValue(""));
// 	data.setSex(dto->sex.getValue(""));
// 	data.setAge(dto->age.getValue(1));
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Menu_Id, menu_id, Menu_Name, menu_name, Menu_Type, menu_type, Parent_Id, parent_id,
		Permission, permission, Status, status, Level, level, Link_Url, link_url, Remark, remark,
		Creator_Id, creator_id, Updater_Id, updater_id
	)
	
	// 执行数据添加
	MenuDAO dao;
	return dao.Insert(data);
}

bool MenuADService::removeData(string id)
{
	MenuDAO dao;
	return dao.DeleteById(id) == 1;
}
