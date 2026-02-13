
#ifndef ORGGROUPUNITLISTDO_H
#define ORGGROUPUNITLISTDO_H
#include <Macros.h>

class OrgGroupUnitListDO {
public:
	CC_SYNTHESIZE(std::string, groupId, GROUP_XID);
	CC_SYNTHESIZE(std::string, unitList, xunitList);
	CC_SYNTHESIZE(int, orderColumn, xorderColumn);

	OrgGroupUnitListDO() {
		groupId = "";
		unitList = "";
		orderColumn = -1;
	}
};
#endif //ORGGROUPUNITLISTDO_H
