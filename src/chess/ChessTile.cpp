#include "ChessTile.h"

namespace chess
{
	ChessTile::ChessTile(Piece piece, Player player)
	: piece_(piece), player_(player)
	{
		;
	}

	ChessTile::ChessTile()
	: piece_(Piece::NONE), player_(Player::NONE)
	{
		;
	}

	bool ChessTile::operator==(const ChessTile& other) const
	{
		piece_ == other.getPiece();
		player_ == other.getPlayer();
	}
}