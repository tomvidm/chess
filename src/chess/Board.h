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
		Board();

		inline uint numRows() const { return rows_; }
		inline uint numCols() const { return cols_; }
		TileType at(uint row, uint col) const;

		void initBoard();
	private:
		uint rows_;
		uint cols_;

		vector<vector<TileType> > board_;
	};

	template <typename TileType>
	Board<TileType>::Board(uint rows, uint cols)
	: rows_(rows), cols_(cols)
	{
		initBoard();
	}

	template <typename TileType>
	Board<TileType>::Board()
	{
		;
	}

	template <typename TileType>
	TileType Board<TileType>::at(uint row, uint col) const
	{
		return board_[row][col];
	}

	template <typename TileType>
	void Board<TileType>::initBoard()
	{
		for (uint r = 0; r < rows_; r++)
		{
			board_.push_back(vector<TileType>(cols_));
		}
	}
}