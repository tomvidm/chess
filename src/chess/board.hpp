#pragma once

#include <vector>

namespace board
{
	typedef unsigned int uint;

	using std::vector;

	template <typename TileType>
	class Board
	{
	public:
		Board(uint rows, uint cols);
	private:
		uint rows_;
		uint cols_;

		vector<vector<TileType>> board_;
	}

	Board::Board(uint rows, uint cols)
	: rows_(rows), cols_(cols)
	{
		for (uint r = 0; r < rows_; r++)
		{
			board_.push_back(vector<TileType>(cols_));
		}
	}
}