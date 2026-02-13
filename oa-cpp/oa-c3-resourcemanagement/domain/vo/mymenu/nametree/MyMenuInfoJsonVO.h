#pragma once

#ifndef _MENUINFOJSONVO_H_
#define _MENUINFOJSONVO_H_
#include "../../../GlobalInclude.h"
#include "../../../dto/mymenu/nametree/MyMenuInfoDTO.h"


#include OATPP_CODEGEN_BEGIN(DTO)



/**
 * 定义一个示例菜单显示JsonVO对象，用于响应给前端
 */
class MyMenuInfoJsonVO : public JsonVO<oatpp::data::mapping::type::List<MyMenuInfoDTO::Wrapper>>
{
	DTO_INIT(MyMenuInfoJsonVO, JsonVO<oatpp::data::mapping::type::List<MyMenuInfoDTO::Wrapper>>);
public:
	// 在构造函数中实例化data列表
	MyMenuInfoJsonVO() {
		this->data = {};
	}
};
class MyMenuInfoPageJsonVO : public JsonVO<oatpp::data::mapping::type::List<MyMenuInfoPageDTO::Wrapper>> {
	DTO_INIT(MyMenuInfoPageJsonVO, JsonVO< oatpp::data::mapping::type::List<MyMenuInfoPageDTO::Wrapper>>);
public:
	// 在构造函数中实例化data列表
	MyMenuInfoPageJsonVO() {
		this->data = {};
	}
};
#include OATPP_CODEGEN_END(DTO)

#endif // !_MENUVO_H_