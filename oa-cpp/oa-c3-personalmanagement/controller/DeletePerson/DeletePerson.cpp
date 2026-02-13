#include"DeletePerson.h"
Uint64JsonVO::Wrapper DeletePersonController::execDeletePerson(const String& id) {
	 
	auto jvo = Uint64JsonVO::createShared();
	 
	
	AddServe service;
	
	auto ans = service.removeData(string(id->c_str()));
	if (ans) {
		jvo->success(ans);
	}
	else
	{
		jvo->fail(ans);
	}
	// ��Ӧ���
	return jvo;
}