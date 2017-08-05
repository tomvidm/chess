#include "Board.h"
#include "ChessTile.h"

namespace chess
{

	class ChessBoard : public board::Board<ChessTile>
	{
	public:
		ChessBoard();

		void placePiece(ChessTile tile);
	};
}