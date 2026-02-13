
#include "stdafx.h"
#include "modify_personal_identityService.h"
#include "dao/modify/modify_personal_identityDAO.h"
#include "../../domain/do/modify/org_identitypersonDO.h"

bool modify_personal_identityService::updateData(const modify_personal_identityDTO::Wrapper& dto)
{
	// 组装DO数据
	org_identitypersonDO data;
	data.setXid(dto->xid.getValue(" ")); 
	data.setXname(dto->xname.getValue(" "));
	data.setXmajor(dto->xmajor.getValue(""));
    // 执行数据修改
	modify_personal_identityDAO dao; 
	return dao.update(data) == 1;
}
