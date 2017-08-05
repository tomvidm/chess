#include "ChessTile.h"

namespace chess
{
	ChessTile::ChessTile(Position pos, Piece piece, Player player)
	: pos_(pos), piece_(piece), player_(player)
	{
		;
	}

	ChessTile::ChessTile()
	: pos_(Position(0,0)), piece_(Piece::NONE), player_(Player::NONE)
	{
		;
	}
}