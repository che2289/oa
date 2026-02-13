#pragma once


#ifndef _MODIFY_LOCKORUNLOCK_OFFICERDTO_
#define _MODIFY_LOCKORUNLOCK_OFFICERDTO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class modify_lockorunlock_officerDTO : public oatpp::DTO
{
	DTO_INIT(modify_lockorunlock_officerDTO, DTO);
	//唯一编码
	DTO_FIELD(String, xid);
	DTO_FIELD_INFO(xid) {
		info->description = ZH_WORDS_GETTER("sample.field.xid");
	}
	// 到期时间
	DTO_FIELD(String, xlockTime);
	DTO_FIELD_INFO(xlockTime) {
		info->description = ZH_WORDS_GETTER("sample.field.xlockTime");
	}
	// 锁定原因
	DTO_FIELD(String, xstatusDes);
	DTO_FIELD_INFO(xstatusDes) {
		info->description = ZH_WORDS_GETTER("sample.field.xstatusDes");
	}
	// 锁定状态
	DTO_FIELD(String, xstatus);
	DTO_FIELD_INFO(xstatus) {
		info->description = ZH_WORDS_GETTER("sample.field.xstatus");
	}

};
class modifyPageDTO : public PageDTO<modify_lockorunlock_officerDTO::Wrapper>
{
	DTO_INIT(modifyPageDTO, PageDTO<modify_lockorunlock_officerDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif // !_MODIFY_LOCKORUNLOCK_OFFICERDTO_
