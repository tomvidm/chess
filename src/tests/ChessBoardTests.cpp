#include "ChessBoardTests.h"

namespace chess
{
namespace ut
{
	void ChessBoardTests::SetUp()
	{
		boardPtr = std::make_shared<ChessBoard>();
	}

	TEST_F(ChessBoardTests, BoardInitializesCorrectly)
	{
		EXPECT_EQ(boardPtr->numRows(), 8);
		EXPECT_EQ(boardPtr->numCols(), 8);
	}
}
}