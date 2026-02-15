#pragma once

#ifndef _MettingCreate_DO_
#define _MettingCreate_DO_
#include "../../DoInclude.h"

/**
 * 示例数据库实体类
 */
class MettingCreateDO
{
	// 会议类型
	CC_SYNTHESIZE(std::string, mettingtype, MettingType);
	// 日期		
	CC_SYNTHESIZE(std::string, date1, Date);
	// 会议开始时间
	CC_SYNTHESIZE(std::string, timestart, TimeStart);
	// 会议结束时间
	CC_SYNTHESIZE(std::string, timeend, TimeEnd);
	// 会议室	
	CC_SYNTHESIZE(std::string, mettingroom, MettingRoom);
	// 会议title	
	CC_SYNTHESIZE(std::string, mettingtitle, MettingTitle);
	// member	  
	CC_SYNTHESIZE(std::string, member, Member);
	// hoster	  
	CC_SYNTHESIZE(std::string, hoster, Hoster);
	// department
	CC_SYNTHESIZE(std::string, department, Department);
	// description
	CC_SYNTHESIZE(std::string, description, Description);
	
public:
	MettingCreateDO() {
		mettingtype = "";

		date1 = "";

		timestart = "";

		mettingroom = "";

		mettingtitle = "";

		member = "";

		hoster = "";

		department = "";

		description = "";
	}

};

#endif // !_MettingCreate_DO_
