#pragma once
const int MOVE_NEXT = 4;
enum class Team
{
	None,
	White,
	Black
};
enum class PieceType
{
	None,
	Pawn,
	Rook,
	Knight,
	Bishop,
	Queen,
	King
};
struct Pos
{
	int x;
	int y;
};

