#include "BoardTests.h"

namespace board {
namespace ut {
	void BoardTests::SetUp()
	{
		boardPtr = std::make_shared<Board<int> >(8,8);
	}

	TEST_F(BoardTests, Trivial)
	{
		EXPECT_EQ(1,1);
	}
}
}