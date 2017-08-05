namespace chess
{
	enum class Piece
	{
		PAWN,
		KING,
		QUEEN,
		BISHOP,
		KNIGHT,
		ROOK
	}

	enum class Player
	{
		BLACK,
		WHITE
	}

	struct Position
	{
		uint row;
		uint col;

		Position(uint r, uint c)
		: row(r), col(c)
		{
			;
		}
	}

	class ChessTile
	{
	public:
		ChessTile(Position pos, Piece piece, Player player);
	private:
		Position pos_;
		Piece piece_;
		Player player_;
	}
}