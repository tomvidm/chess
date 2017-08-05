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

	class ChessTile
	{
	public:
		ChessTile(Piece piece, Player player);
		ChessTile();

		bool operator==(const ChessTile& other) const;

		inline Piece getPiece() const { return piece_; }
		inline Player getPlayer() const { return player_; }
	private:
		Piece piece_;
		Player player_;
	};

	const ChessTile EmptyTile(Piece::NONE, Player::NONE);
}