#pragma once

#ifndef _MEETINGROOMSELECT_SERVICE_
#define _MEETINGROOMSELECT_SERVICE_

#include <list>
#include "../../domain/do/MeetingRoomSelect/MeetingRoomSelectDO.h"
#include "../../domain/query/MeetingRoomSelect/MeetingRoomQuery.h"
#include "../../domain/dto/meetingmanager/MeetingRoomSelectDTO.h"

/**
 * 会议室选择服务实现类
 */
class MeetingRoomSelectService
{
public:
    // 分页查询所有会议室数据
    MeetingRoomSelectPageDTO::Wrapper listAll(const MeetingRoomSelectQuery::Wrapper& query);

    // 保存会议室数据
    uint64_t saveData(const MeetingRoomSelectDTO::Wrapper& dto);

    // 修改会议室数据
    bool updateData(const MeetingRoomSelectDTO::Wrapper& dto);

    // 根据ID删除会议室数据
    bool removeData(uint64_t id);
};


#endif // !_MEETINGROOMSELECT_SERVICE_
