
#include "stdafx.h"
#include "MeetingSelectController.h"
#include "../../service/MeetingSelect/MeetingSelectService.h" 
#include "../ApiDeclarativeServicesHelper.h"

MeetingSelectPageJsonVO::Wrapper MeetingSelectController::execQueryMeeting(const MeetingSelectQuery::Wrapper& query, const PayloadDTO& payload)
{
    MeetingSelectService service; // 创建服务实例，用于调用查询逻辑
    // 调用服务层的查询方法
    auto result = service.listAll(query); // 假设 listAll 可以接受 id作为查询参数
    auto jvo = MeetingSelectPageJsonVO::createShared(); // 创建返回对象，包装查询结果
    jvo->success(result); // 查询成功，将结果包装为成功状态
    return jvo;
}

MeetingSelectJsonVO::Wrapper MeetingSelectController::execQueryOneMeeting(const String& applicant,  const PayloadDTO& payload)
{
    // 创建API客户端
    API_CLIENT_CREATE(ac, om, MeetingSelectApiClient, "meetingselect-api");

    // 构建授权Token（根据SampleController中的逻辑）
    std::string token = PayloadDTO::getTokenPrefix() + payload.getToken();


    // 使用API客户端根据ID查询会议室信息
    return ac->queryOne(token, applicant)->readBodyToDto<MeetingSelectJsonVO::Wrapper>(om);
}

//MeetingSelectPageJsonVO::Wrapper MeetingSelectController::execQueryAllMeetings(const MeetingSelectQuery::Wrapper& query, const PayloadDTO& payload)
//{
//    // 创建客户端对象
//    API_CLIENT_CREATE(ac, om, MeetingRoomSelectApiClient, "meetingselect-api");
//    // 构建凭证
//    std::string token = PayloadDTO::getTokenPrefix() + payload.getToken();
//    // 返回查询结果
//    return ac->queryAll(token, query->page,query->pageSize, URIUtil::urlEncode(query->title))->readBodyToDto<MeetingSelectPageJsonVO::Wrapper>(om);
//}
