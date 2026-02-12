#include"stdafx.h"
#include"service/rolemanagement/RoleManagementService/put/PersonMember/PersonMemberService.h"
#include"dao/put/PersonMember/PersonMemberDAO.h"
uint64_t PersonMemberService::saveData(const PersonMemberDTO::Wrapper& dto)
{
	// 组装DO数据
	PersonMemberDO data;

	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, ROLE_XID, role_xid);
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, XgroupList, xgroupList);
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, XorderColumn, xorderColumn);

	// 执行数据添加
	PersonMemberDAO dao;
	return dao.insert(data);
}


bool PersonMemberService::removeData(uint64_t ROLE_XID)
{
	PersonMemberDAO dao;
	return dao.deleteById(ROLE_XID) == 1;
}