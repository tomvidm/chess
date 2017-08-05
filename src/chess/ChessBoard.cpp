#include "ChessBoard.h"

namespace chess
{
	ChessBoard::ChessBoard()
	: Board(8, 8)
	{
		for (uint c = 0; c < 8; c++)
		{
			board_[1][c] = ChessTile(Position(1, c), Piece::PAWN, Player::WHITE);
			board_[6][c] = ChessTile(Position(6, c), Piece::PAWN, Player::BLACK);
		}
	}
}