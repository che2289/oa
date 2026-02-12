#pragma once
#ifndef _MODIFYGROUPINFO_SERVICE_
#define _MODIFYGROUPINFO_SERVICE_
#include <list>
#include "domain/vo/group/Group_VO.h"
#include "domain/dto/group/Group_DTO.h"

/**
 * 示例服务实现，演示基础的示例服务实现
 */
class ModifyGroupInfoService
{
public:
	//// 分页查询所有数据
	//SamplePageDTO::Wrapper listAll(const SampleQuery::Wrapper& query);
	// 保存数据
	//uint64_t saveData(const GroupDTO::Wrapper& dto);
	// 修改数据
	bool updateData(const Group_DTO::Wrapper& dto);
};

#endif // !_MODIFYGROUPINFO_SERVICE_
