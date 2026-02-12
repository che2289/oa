#include "stdafx.h"
#include "QueryRoleService.h"
#include "dao/rolemanagement/RoleManagementDAO/get/queryrole/QueryRoleDAO.h"
#include "domain/do/get/queryrole/QueryRoleDO.h"

#include "dao/get/queryrole/QueryRoleDAO.h"

QueryRolePageDTO::Wrapper QueryRoleService::listAll(const QueryRoleQuery::Wrapper& query) {
	// 构建返回对象
	auto pages = QueryRolePageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// 查询数据总条数
	QueryRoleDAO dao;
	uint64_t count = dao.count(query);
	if (count <= 0)
	{
		return pages;
	}

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<OrgRoleNameDO> result = dao.selectWithPage(query);

	// 将DO转换成DTO
	for (OrgRoleNameDO sub : result)
	{
		auto dto = QueryRoleDTO::createShared();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, xid, Xid,xname, Xname);
		pages->addData(dto);
	}
	return pages;
}