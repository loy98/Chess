#pragma once
#include "Enum.h"

class Board;
class chessPiece
{
public:
	void CheckCango(Board* board, int x, int y);
	Team GetTeam() { return _team; }
	PieceType GetType() { return _type; }
	void Move();

private:
	Board* _board = nullptr;
	Team _team = Team::None;
	PieceType _type = PieceType::None;
	Pos _pos;
};

