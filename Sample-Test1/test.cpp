
#include "gtest/gtest.h"
#include <iostream>
#include <exception>
#include "../week9task3/stack.h"


TEST(TestCaseName, TestName) {
	Stack ob1(5);
	ob1.Push(1);
  EXPECT_EQ(ob1.b[0], 1);
  EXPECT_TRUE(true);
}

//int main(int argc, char** argv) {
//	::testing::InitGoogleTest(&argc, argv);
//	return RUN_ALL_TESTS();
//}
