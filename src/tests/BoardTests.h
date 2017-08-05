#include "gtest/gtest.h"
#pragma once

#include "Board.h"
#include <memory>

namespace board
{
namespace ut
{
	class BoardTests : public testing::Test 
	{
	protected:
		virtual void SetUp();

		std::shared_ptr<Board<int> > boardPtr;
	};
}
}