#pragma once


#ifndef _MEETINGROOMSELECT_DAO_
#define _MEETINGROOMSELECT_DAO_

#include "BaseDAO.h"
#include "../../domain/do/MeetingRoomSelect/MeetingRoomSelectDO.h"
#include "../../domain/query/MeetingRoomSelect/MeetingRoomQuery.h"

/**
 * 会议室选择表数据库操作实现类
 */
class MeetingRoomSelectDAO : public BaseDAO
{
public:
    // 统计记录数
    uint64_t count(const MeetingRoomSelectQuery::Wrapper& query);

    // 分页查询会议室记录
    list<MeetingRoomSelectDO> selectWithPage(const MeetingRoomSelectQuery::Wrapper& query);

    // 根据会议室名称查询会议室
    list<MeetingRoomSelectDO> selectByRoomName(const std::string& roomName);

    // 插入新的会议室记录
    uint64_t insert(const MeetingRoomSelectDO& iObj);

    // 更新会议室记录
    int update(const MeetingRoomSelectDO& uObj);

    // 根据ID删除会议室记录
    int deleteById(uint64_t id);
};


#endif // !_MEETINGROOMSELECT_DAO_