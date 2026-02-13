#pragma once

#ifndef _MODIFY_LOCKORUNLOCK_OFFICERCONTROLLER_
#define _MODIFY_LOCKORUNLOCK_OFFICERCONTROLLER_
#include "domain/vo/BaseJsonVO.h"
#include "../../domain/dto/modify/modify_lockorunlock_officerDTO.h"
#include OATPP_CODEGEN_BEGIN(ApiController)


class modify_lockorunlock_officerController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(modify_lockorunlock_officerController);

public:
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("sample.modify.summary"), modify_lock_stat, StringJsonVO::Wrapper);

	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "personal-management/modify-lockorunlock-officer", modify_lock_stat, BODY_DTO(modify_lockorunlock_officerDTO::Wrapper, dto), execModify_lockorunlock_officer(dto));

private:
	StringJsonVO::Wrapper execModify_lockorunlock_officer(const modify_lockorunlock_officerDTO::Wrapper& dto);
};




#include OATPP_CODEGEN_BEGIN(ApiController)

#endif // !_MODIFY_LOCKORUNLOCK_OFFICERCONTROLLER_
