#pragma once
#include <gtest/gtest.h>

TEST(TestSuite, testName)
{
	ASSERT_EQ(1, 1);
}

/*
* // in main()
testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
*/