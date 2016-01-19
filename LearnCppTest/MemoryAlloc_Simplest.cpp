#include "test_base.h"

////////////////// my functions
void* Alloc(int size)
{
	return new char[size];
}

////////////////// my testing code

TEST(MA_Simplest, Init)
{
	void* p = Alloc(100);
	EXPECT_TRUE(NULL != p);
}

TEST(MA_Simples, MyFirstTest)
{
	EXPECT_TRUE(sizeof(char) == 1);
	EXPECT_EQ(sizeof(int), 4);
}