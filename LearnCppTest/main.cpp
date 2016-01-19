#include <tchar.h>
#include "test_base.h"

int _tmain(int argc, _TCHAR* argv[])
{
	testing::InitGoogleMock(&argc, argv);

	RUN_ALL_TESTS();

	return 1;
}