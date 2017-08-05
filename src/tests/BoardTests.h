#include "gtest/gtest.h"
#include "board.h"
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