namespace chess
{
	typedef unsigned int uint;

	enum class Piece
	{
		PAWN,
		KING,
		QUEEN,
		BISHOP,
		KNIGHT,
		ROOK,
		NONE
	};

	enum class Player
	{
		BLACK,
		WHITE,
		NONE
	};

	struct Position
	{
		uint row;
		uint col;

		Position(uint r, uint c)
		{
			row = r;
			col = c;
		}
	};

	class ChessTile
	{
	public:
		ChessTile(Position pos, Piece piece, Player player);
		ChessTile();
	private:
		Position pos_;
		Piece piece_;
		Player player_;
	};
}