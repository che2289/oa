#pragma once
#ifndef _GETROLEVO_H_
#define _GETROLEVO_H_

#include "../../GlobalInclude.h" //二层目录
#include "domain/dto/get/GetroleDTO.h"
#include OATPP_CODEGEN_BEGIN(DTO)//标记DTO类定义的宏


class GetroleVO :public oatpp::DTO
{
	DTO_INIT(GetroleVO, DTO);


	//角色名称
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("addroleDTO.field.name"), false, "");
	//唯一编码
	API_DTO_FIELD(String, key, ZH_WORDS_GETTER("addroleDTO.field.key"), true, ""); 
	//角色描述
	API_DTO_FIELD(String, refer, ZH_WORDS_GETTER("addroleDTO.field.refer"), false, "");

	//// 角色名称
	//DTO_FIELD(String, name);
	//DTO_FIELD_INFO(name) {
	//	info->description = ZH_WORDS_GETTER("addroleDTO.field.name");
	//}
	//// 唯一编码
	//DTO_FIELD(String, key);
	//DTO_FIELD_INFO(key) {
	//	info->description = ZH_WORDS_GETTER("addroleDTO.field.key");
	//}
	//// 角色描述
	//DTO_FIELD(String, refer);
	//DTO_FIELD_INFO(refer) {
	//	info->description = ZH_WORDS_GETTER("addroleDTO.field.refer");
	//}

};




//个人信息显示JsonVO
class GetroleJsonVO : public JsonVO<GetroleVO::Wrapper> {
	DTO_INIT(GetroleJsonVO, JsonVO<GetroleVO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_GETROLEVO_H_
