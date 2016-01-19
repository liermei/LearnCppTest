#include "test_base.h"

// functions


int funny()
{
	int sum = 0, value;
	while (1)
	{
		std::cin >> value;
		sum += value;
		if (value == 0)
			break;
	}
	return sum;
}

// testing code

TEST(FunnyTest, justFunny)
{
	EXPECT_EQ(100, funny());

	EXPECT_EQ(100, funny());
}