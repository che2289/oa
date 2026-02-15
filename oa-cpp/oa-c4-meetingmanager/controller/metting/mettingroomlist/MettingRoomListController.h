#pragma once

#ifndef _MettingRoomList_CONTROLLER_
#define _MettingRoomList_CONTROLLER_

#include "domain/vo/BaseJsonVO.h"
#include "domain/query/metting/mettingroomlist/MettingRoomListQuery.h"
#include "domain/dto/metting/mettingroomlist/MettingRoomListDTO.h"
#include "domain/vo/metting/mettingroomlist/MettingRoomListVO.h"

// 0 定义API控制器使用宏
#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

/**
 * 示例控制器，演示基础接口的使用
 */
class MettingRoomListController : public oatpp::web::server::api::ApiController // 1 继承控制器
{
	// 2 定义控制器访问入口
	API_ACCESS_DECLARE(MettingRoomListController);
	// 3 定义接口
public:
	// 3.1 定义查询接口描述
	ENDPOINT_INFO(queryroomlist) {
		// 定义接口标题
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("mettingroom.query"));
		// 定义默认授权参数（可选定义，如果定义了，下面ENDPOINT里面需要加入API_HANDLER_AUTH_PARAME）
		API_DEF_ADD_AUTH();
		// 定义响应参数格式
		API_DEF_ADD_RSP_JSON_WRAPPER(MettingRoomListPageJsonVO);
		// 定义分页查询参数描述
		API_DEF_ADD_PAGE_PARAMS();
		// date
		API_DEF_ADD_QUERY_PARAMS(String, "date1", ZH_WORDS_GETTER("mettingroom.date"), "2024-11-1 22:00:00", false);
		// time
		API_DEF_ADD_QUERY_PARAMS(String, "time1", ZH_WORDS_GETTER("mettingroom.time"), "2205", false);
		// build
		API_DEF_ADD_QUERY_PARAMS(String, "build", ZH_WORDS_GETTER("mettingroom.build"), "123", false);

	}
	// 3.2 定义查询接口处理
	ENDPOINT(API_M_GET, "/meeting/meetingroom/query-roomlist", queryroomlist, QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {
		// 解析查询参数为Query领域模型
		API_HANDLER_QUERY_PARAM(query, MettingRoomListQuery, queryParams);
		// 呼叫执行函数响应结果
		API_HANDLER_RESP_VO(execQueryRoomList(query));
	}

	


private:
	// 3.3 演示分页查询数据
	MettingRoomListPageJsonVO::Wrapper execQueryRoomList(const MettingRoomListQuery::Wrapper& query);

};

// 0 取消API控制器使用宏
#include OATPP_CODEGEN_END(ApiController) //<- End Codegen
#endif // _MettingRoomList_CONTROLLER_