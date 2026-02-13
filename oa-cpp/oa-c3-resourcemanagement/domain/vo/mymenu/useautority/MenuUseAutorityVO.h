#pragma once

#ifndef _MENUUSEAUTORITYVO_H_
#define _MENUUSEAUTORITYVO_H_
#include "../../../GlobalInclude.h"
#include "../../../dto/mymenu/useautority/MenuUseAutorityDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)



//class MenuUseAutorityVO : public oatpp::DTO
//{
//	DTO_INIT(MenuUseAutorityVO, DTO);
//	//数据唯一标识，权限ID
//	API_DTO_FIELD_DEFAULT(UInt64, Aid, ZH_WORDS_GETTER("menu.authority.field.id"));
//	//菜单ID
//	API_DTO_FIELD_DEFAULT(UInt64, Mid, ZH_WORDS_GETTER("menu.setting.field.id"));
//	//菜单功能权限名称
//	API_DTO_FIELD_DEFAULT(String, name, ZH_WORDS_GETTER("menu.authority.field.name"));
//	//菜单功能权限拥有者
//	API_DTO_FIELD_DEFAULT(UInt64, userid, ZH_WORDS_GETTER("menu.authority.field.userid"));
//	//菜单权限类型
//	API_DTO_FIELD_DEFAULT(String, type, ZH_WORDS_GETTER("menu.authority.field.type"));
//	//菜单权限状态  ：开启，关闭
//	API_DTO_FIELD_DEFAULT(String, status, ZH_WORDS_GETTER("menu.authority.field.status"));
//
//
//};

/**
 * 定义一个示例菜单显示JsonVO对象，用于响应给前端
 */
class MenuUseAutorityJsonVO : public JsonVO<MenuUseAutorityDTO::Wrapper>
{
	DTO_INIT(MenuUseAutorityJsonVO, JsonVO<MenuUseAutorityDTO::Wrapper>);

};

class MenuUseAutorityPageJsonVO : public JsonVO<MenuUseAutorityPageDTO::Wrapper> {
	DTO_INIT(MenuUseAutorityPageJsonVO, JsonVO<MenuUseAutorityPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_MENUVO_H_