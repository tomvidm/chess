#include "Board.h"
#include "ChessTile.h"

namespace chess
{

	class ChessBoard : public board::Board<ChessTile>
	{
	public:
		ChessBoard();

		void placeTile(uint row, uint col, ChessTile tile);

		inline bool tileIsEmpty(uint row, uint col) const { return at(row, col) == EmptyTile; }
	};
}