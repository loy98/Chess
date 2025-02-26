#include <iostream>
#include "Board.h"
using namespace std;

void Board::Init()
{
	
}

void Board::Render()
{
	char alphabet = 65;
	for (int y = 0; y < 18; ++y)
	{
		if (y == 17)
		{
			for (int x = 0; x < 25; ++x)
			{
				if (x % 3 != 0)
					cout << " ";
				else if (x != 0)
					cout << alphabet++;
				//cout << static_cast<char>(65 + (x - 3) / 3);
			}
			cout << endl;
			break;
		}
		for (int x = 0; x < 25; ++x)
		{
			if (x % 3 == 0)
			{
				if (y % 2 == 0)
					cout << " ";
				else
					cout << "|";
			}
			else if (y % 2 == 0)
			{
				cout << "-";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
}

void Board::Update()
{

}

void Board::ChoicePiece()
{

}
