#include "BoardTests.h"

namespace board {
namespace ut {
	void BoardTests::SetUp()
	{
		;
	}

	TEST_F(BoardTests, Trivial)
	{
		EXPECT_EQ(1,1);
	}
}
}