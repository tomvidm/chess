#include "BoardTests.h"

namespace board {
namespace ut {
	void BoardTests::SetUp()
	{
		boardPtr = std::make_shared<Board<int> >(8,8);
	}

	TEST_F(BoardTests, BoardInitializesCorrectly)
	{
		EXPECT_EQ(boardPtr->numRows(),8);
		EXPECT_EQ(boardPtr->numCols(),8);
	}
}
}
