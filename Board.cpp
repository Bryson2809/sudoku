#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <array>


using namespace std;

class Board
{
public:

	array<array<int, 9>, 9> finalBoard; 
	
	array<array<int, 9>, 9> board0 = { {
		{0,0,4,0,5,0,0,0,0},
		{9,0,0,7,3,4,6,0,0},
		{0,0,3,0,2,1,0,4,9},
		{0,3,5,0,9,0,4,8,0},
		{0,9,0,0,0,0,0,3,0},
		{0,7,6,0,1,0,9,2,0},
		{3,1,0,9,7,0,2,0,0},
		{0,0,9,1,8,2,0,0,3},
		{0,0,0,0,6,0,1,0,0}
	} };

	array<array<int, 9>, 9> board1;

	array<array<int, 9>, 9> board2;

	array<array<int, 9>, 9> board3;

	array<array<int, 9>, 9> board4;

	array<array<int, 9>, 9> board5;

	array<array<int, 9>, 9> board6;

	array<array<int, 9>, 9> board7;

	array<array<int, 9>, 9> board8;

	array<array<int, 9>, 9> board9;
	Board()
	{
		
	}

	~Board()
	{
		
	}

	void toString()
	{
		cout << endl;
		for (int i = 0; i < sizeof(this->finalBoard[i]) / sizeof(int); i++)
		{
			cout << "  ";
			for (int j = 0; j < sizeof(this->finalBoard[j]) / sizeof(int); j++)
			{
				if ((j + 1) % 3 != 0)
				{
					if (this->finalBoard[i][j] == 0)
						cout << "x ";
					else
						cout << this->finalBoard[i][j] << " ";
				}
					
				else
				{
					if (j == 8)
					{
						if (this->finalBoard[i][j] == 0)
							cout << "x";
						else
							cout << this->finalBoard[i][j];
					}
					
					else
					{
						if (this->finalBoard[i][j] == 0)
							cout << "x | ";
						else
							cout << this->finalBoard[i][j] << " | ";
					}
				}
			}
			if ((i + 1) % 3 != 0)
				cout << endl;
			else if (i != 8)
				cout << "\n" << "-------------------------" << endl;
		}

		cout << endl;
		cout << endl;
	}

	void randBoard()
	{
		srand(time(NULL));

		int boardNum = rand() % 10;

		finalBoard = board0;

		/*switch (boardNum)
		{
		case 0:
			finalBoard = board0;
			break;
		case 1:
			finalBoard = board1;
			break;
		case 2:
			finalBoard = board2;
			break;
		case 3:
			finalBoard = boards3;
			break;
		case 4:
			finalBoard = board4;
			break;
		case 5:
			finalBoard = board5;
			break;
		case 6:
			finalBoard = board6;
			break;
		case 7:
			finalBoard = board7;
			break;
		case 8:
			finalBoard = board8;
			break;
		case 9:
			finalBoard = board9;
			break;
		}*/
	}
};