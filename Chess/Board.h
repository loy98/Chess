#pragma once
#include "Enum.h"
class ChessPiece;
class Board
{
public:
	void Init();
	void Render();
	void Update();
	void ChoicePiece();


private:
	ChessPiece* _board[8][8] = { nullptr };
	Pos* _CanGO[8];
};

