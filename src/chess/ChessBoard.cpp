#include "ChessBoard.h"

namespace chess
{
	ChessBoard::ChessBoard()
	: Board(8, 8)
	{
		for (uint c = 0; c < 8; c++)
		{
			board_[1][c] = EmptyTile;
			board_[6][c] = EmptyTile;
		}
	}

	void ChessBoard::placeTile(uint row, uint col, ChessTile tile)
	{
		set(row, col, tile);
	}
}