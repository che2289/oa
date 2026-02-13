#pragma once

#ifndef _MENUSETTINGCONTROLLER_H_
#define _MENUSETTINGCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/mymenu/nametree/MyMenuInfoJsonVO.h"
#include "domain/query/PageQuery.h"
#include "domain/query/mymenu/nametree/MyMenuInfoQuery.h"



#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class MenuSettingController : public oatpp::web::server::api::ApiController
{
	// 添加访问定义
	API_ACCESS_DECLARE(MenuSettingController);
public:
	//获取菜单信息
	ENDPOINT_INFO(MenuInfo) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("suixin.menuinfo.summary"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(MyMenuInfoJsonVO);
		//// 定义其他查询参数描述
		//API_DEF_ADD_QUERY_PARAMS(String, "menu_name", ZH_WORDS_GETTER("menu.setting.field.id"), "name", false);

	}
	// 3.2 定义查询接口处理
	ENDPOINT(API_M_GET, "/resource-management/menu-nametree", MenuInfo, QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {/*, API_HANDLER_AUTH_PARAME*/
		//// 解析查询参数为Query领域模型
		API_HANDLER_QUERY_PARAM(menuinfoQuery, MyMenuInfoQuery, queryParams);
		// 呼叫执行函数响应结果 
		API_HANDLER_RESP_VO(execMenuInfo(menuinfoQuery, authObject->getPayload()));/* , authObject->getPayload()*/
	}
private:
	MyMenuInfoJsonVO::Wrapper execMenuInfo(const MyMenuInfoQuery::Wrapper& query, const PayloadDTO& payload); /*, const PayloadDTO& payload*/
};

#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // _USERCONTROLLER_H_