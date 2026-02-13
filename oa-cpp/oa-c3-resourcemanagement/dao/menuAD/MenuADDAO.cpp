
#include "stdafx.h"
#include "MenuADDAO.h"
#include "MenuADMapper.h"

//定义条件解析宏，减少重复代码
#define SAMPLE_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->id) { \
	sql << " AND `m_id`=?"; \
	SQLPARAMS_PUSH(params, "i", int, query->m_id.getValue("")); \
} \
if (query->title) { \
	sql << " AND `title`=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->title.getValue("")); \
} \

uint64_t MenuDAO::Insert(const MenuInfoDO& iObj)
{
	string sql = "INSERT INTO `org_menu` (`menu_id`, `menu_name`, `menu_type`, `parent_id`, `permission`, `status`, `level`, `link_url`, `remark`, `creator_id`, `updater_id`, `create_time`, `update_time`) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, NOW(), NOW())";
	return sqlSession->executeInsert(sql, "%s%s%i%s%s%i%i%s%s%s%s", 
		iObj.getMenu_Id(), iObj.getMenu_Name(), iObj.getMenu_Type(), iObj.getParent_Id(), 
		iObj.getPermission(), iObj.getStatus(), iObj.getLevel(), iObj.getLink_Url(), iObj.getRemark(),
		iObj.getCreator_Id(), iObj.getUpdater_Id());
}
std::list<MenuInfoDO> MenuDAO::SearchChild(string id)
{
	string sql = "SELECT menu_id FROM `org_menu` WHERE `parent_id`= ?";
	MenuADMapper mapper;
	return sqlSession->executeQuery<MenuInfoDO, MenuADMapper>(sql, mapper, "%s", id);
}

int MenuDAO::DeleteById(string id)
{
	list<MenuInfoDO> m_list;
	m_list = SearchChild(id);
	string sql = "DELETE FROM `org_menu` WHERE `menu_id`=?";
	if (m_list.empty())
	{	
		return sqlSession->executeUpdate(sql, "%s", id);
	}
	for (MenuInfoDO dao : m_list)
	{
		DeleteById(dao.getMenu_Id()); //将子菜单删除
	}
	return sqlSession->executeUpdate(sql, "%s", id);
}

