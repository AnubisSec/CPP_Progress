#include <iostream>

using namespace std;

int main() {
	enum chessPiece {
		Empty = 0,
		Pawn,
		Bishop,
		Knight,
		Rook,
		Queen,
		King		
	
	};

	chessPiece chessBoard[8][8];

	chessBoard[0] [0] = chessBoard [0] [7] = Rook;
	chessBoard[7] [0] = chessBoard [7] [7] = Rook;

	return 0;
	
}
