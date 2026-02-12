#include "stdafx.h"
#include "rolemanagementService.h"
#include "../../dao/rolemanagement/rolemanagementDAO.h"
#include "../../controller/groupmanagement/GroupManagementController.h"
#include "../../domain/do/get/OrgGroupGrouplist/OrgGroupGrouplistDO.h"
#include "../../domain/do/get/OrgGroupUnitlist/OrgGroupUnitlistDO.h"
#include "../../domain/do/put/OrgGroupIdentitylist/OrgGroupIdentitylistDO.h"
//#include "../../../oa-cpp/lib-oatpp\include\domain\dto\PageDTO.h"
#include "Macros.h"

//群组成员表
GetGroupMembersPageDTO::Wrapper rolemanagementService::listAllG(const GetGroupMembersQuery::Wrapper& query)
{
	//cout << 999;
	// 构建返回对象
	auto pages = GetGroupMembersPageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// 查询数据总条数
	rolemanagementDAO dao;
	uint64_t count = dao.countG(query);
	if (count <= 0)
	{
		return pages;
	}

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<OrgGroupGrouplistDO> result = dao.selectWithPage(query);
	// 将DO转换成DTO
	for (OrgGroupGrouplistDO sub : result)
	{
		auto dto = GetGroupMembersDTO::createShared();
		dto->name = sub.getName();
		dto->allname = sub.getAllname();
		dto->xgroupList = sub.getXgroupList();
	
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, name, Name, allname, Allname, xgroupList, XgroupList)
			pages->addData(dto);

	}
	return pages;
}

//组织成员表
GetOrganizationMembersPageDTO::Wrapper rolemanagementService::listAllO(const GetOrganizationMembersQuery::Wrapper& query)
{
	// 构建返回对象
	auto pages = GetOrganizationMembersPageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// 查询数据总条数
	rolemanagementDAO dao;
	uint64_t count = dao.countO(query);
	if (count <= 0)
	{
		return pages;
	}

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<OrgGroupUnitlistDO> result = dao.selectWithPage(query);
	// 将DO转换成DTO
	for (OrgGroupUnitlistDO sub : result)
	{
		auto dto = GetOrganizationMembersDTO::createShared();
		dto->name = sub.getName();
		dto->xunitList = sub.getXunitList();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, name, Name, xunitList, XunitList)
			pages->addData(dto);

	}
	return pages;
}

uint64_t rolemanagementService::saveData(const AddOrRemoveIdentityMembersDTO::Wrapper& dto)
{
	// 组装DO数据
	OrgGroupIdentitylistDO data;
	rolemanagementDAO dao;
	auto xidentityList = dto->xidentityList.get();
	auto groupId = dto->groupxid.get();

	list<oatpp::String> dataidentityList = dao.selectIdentityList(*groupId);
	
	auto originalIdentityList = *xidentityList;

	// 使用 datagroupList 对 groupList 进行去重
	for (const auto& item : dataidentityList) {
		xidentityList->remove_if([&item](const oatpp::String& groupItem) {
			return groupItem == item;
			});
	}

		std::cout << "xidentityList" << std::endl;
	for (auto i : *xidentityList)
	{
		std::cout << i.getValue({}) << std::endl;
	}

	// 使用 originalIdentityList 对 datagroupList 进行去重
	for (const auto& item : originalIdentityList) {
		dataidentityList.remove_if([&item](const oatpp::String& dataItem) {
			return dataItem == item;
			});
	}
		std::cout << "dataidentityList" << std::endl;
	for (auto i : dataidentityList)
	{
		std::cout << i.getValue({}) << std::endl;
	}
	uint64_t maxOrderColumn = 0;
	uint64_t count = 0;
	std::list<OrgGroupIdentitylistDO> listData;

	maxOrderColumn = dao.selectMaxXordercolumn(*groupId, "org_group_identitylist", "GROUP_XID") + 1;
	uint32_t i = 0;

	for (const auto item : *xidentityList)
	{
		std::cout << item.getValue({}) << std::endl;
		//std::cout << maxOrderColumn << std::endl;
		data.setGroupxid(*groupId);
		data.setXidentityList(item);
		data.setXorderColumn(maxOrderColumn + i);
		i++;
		listData.push_back(data);
	}

	//data.setGroupxid(dto->groupxid.getValue({})); data.setXidentityList(dto->xidentityList.getValue({}));
		// 执行数据添加

	count += dao.updateOrgRoleGroupList(*groupId, dataidentityList, listData);
	return count;

	
	/*return dao.insert(data);*/
}

bool rolemanagementService::removeData(const AddOrRemoveIdentityMembersDTO::Wrapper& dto)
{
	// 组装DO数据
	OrgGroupIdentitylistDO data;
	rolemanagementDAO dao;
	auto xidentityList = dto->xidentityList.get();
	auto groupId = dto->groupxid.get();

	list<oatpp::String> dataidentityList = dao.selectIdentityList(*groupId);

	auto originalIdentityList = *xidentityList;

	uint64_t maxOrderColumn = 0;
	uint64_t count = 0;
	std::list<OrgGroupIdentitylistDO> listData;

	maxOrderColumn = dao.selectMaxXordercolumn(*groupId, "org_group_identitylist", "GROUP_XID") + 1;
	uint32_t i = 0;
	for (const auto item : *xidentityList)
	{
		std::cout << item.getValue({}) << std::endl;
		//std::cout << maxOrderColumn << std::endl;
		data.setGroupxid(*groupId);
		data.setXidentityList(item);
		data.setXorderColumn(maxOrderColumn + i);
		i++;
		listData.push_back(data);
	}
	//data.setGroupxid(dto->groupxid.getValue({})); data.setXidentityList(dto->xidentityList[1].getValue({}));
	count += dao.updateOrgRoleGroupList(*groupId, dataidentityList, listData);
	return count;
	//return dao.deleteById(data);
}
