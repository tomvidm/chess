include_directories(../chess)

set(UT_SRC
	BoardTests.cpp
	ChessBoardTests.cpp
)

add_executable(UnitTests ${UT_SRC})
target_link_libraries(UnitTests gtest_main ChessBoard)