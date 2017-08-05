#pragma once

#include "ChessBoard.h"
#include "gtest/gtest.h"

#include <memory>

namespace chess
{
namespace ut
{
	class ChessBoardTests : public testing::Test 
	{
	protected:
		virtual void SetUp();

		std::shared_ptr<ChessBoard> boardPtr;
	};
}
}