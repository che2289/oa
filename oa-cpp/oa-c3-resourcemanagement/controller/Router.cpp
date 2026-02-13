
#include "stdafx.h"
#include "Router.h"
#include "ApiHelper.h"



#ifdef HTTP_SERVER_DEMO
#include "user/UserController.h"
#include "sample/SampleController.h"
#include "file/FileController.h"
#include "ws/WSController.h"
#endif
#include "Functional-permissions/Add-menu/AddPermissionsController.h"
#include "Functional-permissions/Delete-menu/DeletePermissionsController.h"
#include "../domain/dto/Functional-permissions/Delete-menu/DeletemenuDTO.h"
#include "../domain/dto/Functional-permissions/Add-menu/AddmenuDTO.h"
#include "resource-management/resource-tree-permissios/ResourcetreeController.h"
#include "menuinfo/MenuInfoController.h"
#include "menu/nametree/MenuSettingController.h"
#include "menu/UseAutority/MenuAutorityController.h"
#include "menuAD/MenuADController.h"

#include "modify/modify_menu_function_permissionsController.h"

// 如果定义了关闭Swagger文档宏
#ifdef CLOSE_SWAGGER_DOC
// 简化绑定控制器宏定义
#define ROUTER_SIMPLE_BIND(__CLASS__) \
router->addController(__CLASS__::createShared())
#else
// 简化绑定控制器宏定义
#define ROUTER_SIMPLE_BIND(__CLASS__) \
BIND_CONTROLLER(docEndpoints, router, __CLASS__)
#endif

Router::Router(Endpoints* docEndpoints, HttpRouter* router)
{
	this->docEndpoints = docEndpoints;
	this->router = router;
}

void Router::initRouter()
{
#ifdef HTTP_SERVER_DEMO
	createSampleRouter();
#endif

	//#TIP :系统扩展路由定义，写在这个后面
	ROUTER_SIMPLE_BIND(ResourcetreeController);
	ROUTER_SIMPLE_BIND(MenuADController);
	ROUTER_SIMPLE_BIND(AddPermissionsController);
	ROUTER_SIMPLE_BIND(DeletePermissionsController);
	ROUTER_SIMPLE_BIND(MenuInfoController);
	ROUTER_SIMPLE_BIND(MenuSettingController);
	ROUTER_SIMPLE_BIND(MenuAutorityController);
	ROUTER_SIMPLE_BIND(modify_menu_function_permissionsController);

}

#ifdef HTTP_SERVER_DEMO
void Router::createSampleRouter()
{
	// 绑定示例控制器
	ROUTER_SIMPLE_BIND(SampleController);
	// 绑定用户控制器
	ROUTER_SIMPLE_BIND(UserController);
	// 绑定文件控制器
	ROUTER_SIMPLE_BIND(FileController);
	
	// 绑定WebSocket控制器
	router->addController(WSContorller::createShared());
}
#endif
