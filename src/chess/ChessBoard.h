#include "Board.h"

namespace chess
{
	class ChessTile
	{
		int i;
	};

	class ChessBoard : public board::Board<ChessTile>
	{
	public:
		ChessBoard();
	};
}