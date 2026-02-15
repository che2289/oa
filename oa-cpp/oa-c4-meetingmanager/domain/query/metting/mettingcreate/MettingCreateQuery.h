#pragma once

#ifndef _MettingCreate_QUERY_
#define _MettingCreate_QUERY_

#include "../../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例分页查询对象
 */
class MettingRoomQuery : public PageQuery
{
	DTO_INIT(MettingRoomQuery, PageQuery);
	// metting room
	API_DTO_FIELD_DEFAULT(String, room, ZH_WORDS_GETTER("metting.mettingcreate.query.room"));
	
};
class MettingHosterQuery : public PageQuery
{
	DTO_INIT(MettingHosterQuery, PageQuery);
	// hoster
	API_DTO_FIELD_DEFAULT(String, hoster, ZH_WORDS_GETTER("metting.mettingcreate.query.hoster"));

};
class MettingDepartQuery : public PageQuery
{
	DTO_INIT(MettingDepartQuery, PageQuery);
	// department
	API_DTO_FIELD_DEFAULT(String, depart, ZH_WORDS_GETTER("metting.mettingcreate.query.depart"));

};
class MettingMemberQuery : public PageQuery
{
	DTO_INIT(MettingMemberQuery, PageQuery);
	// member
	API_DTO_FIELD_DEFAULT(String, member, ZH_WORDS_GETTER("metting.mettingcreate.query.member"));
	API_DTO_FIELD_DEFAULT(String, identify, ZH_WORDS_GETTER("metting.mettingcreate.query.identify"));

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_MettingCreate_QUERY_