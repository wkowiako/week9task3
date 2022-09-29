#include "pch.h"
#include "../week9task3/stack.h"
//
//TEST(TestCaseName, TestName) {
//  EXPECT_EQ(1, 1);
//  EXPECT_TRUE(true);
//}

TEST(TestStackMethod, push) {
	Stack ob1(5);
	ob1.Push(1);
	EXPECT_EQ(ob1.b[0], 1);
	EXPECT_TRUE(true);
}

TEST(TestStackMethod, push2) {
	Stack ob1(5);
	ob1.Push(1);
	ob1.Push(2);
	EXPECT_EQ(ob1.b[1], 2);
	EXPECT_TRUE(true);
}
TEST(TestStackMethod, Pop) {
	Stack ob1(5);
	ob1.Push(1);
	ob1.Push(2);
	ob1.Pop();
	EXPECT_EQ(ob1.b[1], 0);
	EXPECT_TRUE(true);
}

//TEST(TestStackMethod, capacity) {
//	Stack ob1(5);
//	ob1.Push(1);
//	
//	EXPECT_EQ(, 5);
//	EXPECT_TRUE(true);
//}


TEST(TestStackMethod, FreeSpacesLeft) {
	Stack ob1(5);
	ob1.Push(1);
	EXPECT_EQ (ob1.FreeSpacesLeft(), 4);
	EXPECT_TRUE(true);
}