#pragma once

#ifndef _APIDECLARATIVESERVICESHELPER_H_
#define _APIDECLARATIVESERVICESHELPER_H_
/**
 * 定义声明式服务调用宏简化操作，以及在此文件中统一导入声明式服务类相关头文件，方便管理和调用
 */

// 导入必须头文件
#include "oatpp/core/data/mapping/ObjectMapper.hpp"
#include "oatpp/web/client/HttpRequestExecutor.hpp"
#ifdef HTTP_SERVER_DEMO
#include "service/sample/declarative/SampleApiClient.h"
#endif
//////////////////////////////////////////////////////////////////////////
// #TIP: 项目中的ApiClient在这里导入



//////////////////////////////////////////////////////////////////////////

/**
 * 定义一个创建API Client的宏
 * @param _VAR_CLIENT_: 创建的客户端变量名称
 * @param _VAR_MAPPER_: 用于JSON数据转换的mapper对象变量名称
 * @param _CLASS_CLIENT_: 客户端类名
 * @param _EXECUTOR_NAME_: HttpRequestExecutor执行器组件名称。如："gateway"
 */
#define API_CLIENT_CREATE(_VAR_CLIENT_, _VAR_MAPPER_, _CLASS_CLIENT_, _EXECUTOR_NAME_) \
OATPP_COMPONENT(std::shared_ptr<oatpp::web::client::HttpRequestExecutor>, requestExecutor, _EXECUTOR_NAME_); \
OATPP_COMPONENT(std::shared_ptr<oatpp::data::mapping::ObjectMapper>, _VAR_MAPPER_); \
auto _VAR_CLIENT_ = _CLASS_CLIENT_::createShared(requestExecutor, _VAR_MAPPER_)

#endif // !_APIDECLARATIVESERVICESHELPER_H_