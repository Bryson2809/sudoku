/*	Author: Bryson Carroll
	Date: 9/21/2021
	Email: Bryson2809@gmail.com
	Purpose: Holds all sudoku boards as 2d arrays, picks a random one, and prints it
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <array>


using namespace std;

class Board
{
public:

	//Placeholder board that will be set to the random board selected for toString
	array<array<int, 9>, 9> finalBoard; 
	
	//Easy Boards
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

	array<array<int, 9>, 9> board1 = { {
		{5,2,0,0,0,0,0,0,6},
		{1,0,0,0,2,0,5,3,0},
		{4,7,6,3,0,0,0,0,0},
		{3,0,0,8,0,6,0,0,9},
		{0,0,5,7,4,2,6,0,0},
		{7,0,0,1,0,3,0,0,5},
		{0,0,0,0,0,8,1,9,7},
		{0,1,7,0,3,0,0,0,8},
		{9,0,0,0,0,0,0,6,2}
	} };

	array<array<int, 9>, 9> board2 = { { 
		{0,0,0,2,1,8,0,6,0},
		{9,0,0,0,0,4,0,8,7},
		{0,0,0,0,7,9,0,0,1},
		{3,5,0,0,0,0,0,1,8},
		{0,0,4,0,2,6,3,0,0},
		{8,0,0,9,6,0,0,0,0},
		{1,4,0,7,0,0,0,0,6},
		{0,6,0,8,4,2,0,0,0}
	} };

	//Medium Boards
	array<array<int, 9>, 9> board3 = { {
		{3,0,2,1,0,4,0,9,0},
		{0,0,0,0,0,5,0,0,0},
		{0,0,4,3,9,0,6,0,5},
		{0,2,7,9,0,0,1,0,0},
		{0,0,0,0,0,0,0,0,0},
		{0,0,1,0,0,6,5,8,0},
		{2,0,9,0,5,7,4,0,0},
		{0,0,0,2,0,0,0,0,0},
		{0,4,0,8,0,3,9,0,2}
	} };

	array<array<int, 9>, 9> board4 = { { 
		{8,0,0,6,0,0,0,0,4},
		{0,0,0,0,0,3,0,1,2},
		{0,5,0,0,0,0,8,9,0},
		{0,0,0,1,0,7,0,8,5},
		{0,0,8,0,3,0,1,0,0},
		{5,2,0,9,0,4,0,0,0},
		{0,4,5,0,0,0,0,2,0},
		{6,7,0,2,0,0,0,0,0},
		{2,0,0,0,0,5,0,0,6}
	} };

	array<array<int, 9>, 9> board5 = { { 
		{1,0,6,0,0,0,5,0,2},
		{3,0,0,5,0,0,0,0,0},
		{0,0,5,9,0,4,0,0,0},
		{9,0,0,7,5,0,0,1,8},
		{0,0,0,0,9,0,0,0,0},
		{5,4,0,0,1,2,0,0,6},
		{0,0,0,2,0,5,9,0,0},
		{0,0,0,0,0,3,0,0,7},
		{2,0,7,0,0,0,8,0,5}
	} };

	//Hard Boards
	array<array<int, 9>, 9> board6 = { { 
		{9,0,0,0,0,1,0,0,4},
		{0,0,1,0,0,7,0,5,0},
		{0,0,2,0,9,0,6,0,0},
		{0,5,9,0,0,0,1,0,0},
		{6,0,0,0,5,0,0,0,8},
		{0,0,7,0,0,0,9,3,0},
		{0,0,5,0,3,0,7,0,0},
		{0,2,0,9,0,0,5,0,0},
		{7,0,0,4,0,0,0,0,3}
	} };

	array<array<int, 9>, 9> board7 = { { 
		{0,4,0,9,7,0,0,0,8},
		{5,0,0,0,8,0,0,0,0},
		{7,0,3,0,0,0,4,0,0},
		{0,0,5,0,0,9,0,0,6},
		{0,0,9,0,0,0,3,0,0},
		{1,0,0,2,0,0,7,0,0},
		{0,0,7,0,0,0,2,0,1},
		{0,0,0,0,4,0,0,0,7},
		{8,0,0,0,2,6,0,5,0}
	} };

	array<array<int, 9>, 9> board8 = { { 
		{0,7,9,0,0,0,0,0,0},
		{0,0,0,7,0,0,8,0,0},
		{0,4,6,0,2,5,0,1,0},
		{1,0,0,9,0,0,0,6,0},
		{0,0,4,0,0,0,5,0,0},
		{0,6,0,0,0,2,0,0,3},
		{0,9,0,8,5,0,6,7,0},
		{0,0,8,0,0,6,0,0,0},
		{0,0,0,0,0,0,1,4,0}
	} };

	//Insane Boards
	array<array<int, 9>, 9> board9 = { { 
		{0,0,0,0,0,0,0,0,6},
		{0,0,0,8,0,0,2,3,4},
		{2,0,0,7,9,0,0,0,0},
		{0,0,8,0,0,0,4,6,0},
		{7,0,0,0,2,0,0,0,1},
		{0,9,4,0,0,0,5,0,0},
		{0,0,0,0,7,6,0,0,5},
		{4,7,1,0,0,8,0,0,0},
		{6,0,0,0,0,0,0,0,0}
	} };
	Board()
	{
		
	}

	~Board()
	{
		
	}

	//Print board, use x's as placeholder for an empty space
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

		cout << endl;

		//Sets finalBoard to the random board choosen
		switch (boardNum)
		{
		case 0:
			cout << "Board 1: Easy" << endl;
			finalBoard = board0;
			break;
		case 1:
			cout << "Board 2: Easy" << endl;
			finalBoard = board1;
			break;
		case 2:
			cout << "Board 3: Easy" << endl;
			finalBoard = board2;
			break;
		case 3:
			cout << "Board 4: Medium" << endl;
			finalBoard = board3;
			break;
		case 4:
			cout << "Board 5: Medium" << endl;
			finalBoard = board4;
			break;
		case 5:
			cout << "Board 6: Medium" << endl;
			finalBoard = board5;
			break;
		case 6:
			cout << "Board 7: Hard" << endl;
			finalBoard = board6;
			break;
		case 7:
			cout << "Board 8: Hard" << endl;
			finalBoard = board7;
			break;
		case 8:
			cout << "Board 9: Hard" << endl;
			finalBoard = board8;
			break;
		case 9:
			cout << "Board 10: Insane" << endl;
			finalBoard = board9;
			break;
		}
	}

	void solve()
	{
		
	}

private:
	bool check_row = false;
	bool check_column = false;
	bool check_box = false;
	bool check_board = false;

	void checkRow(int row_num)
	{

	}

	void checkColumn(int column_num)
	{

	}

	void checkBox(int row_index, int column_index)
	{

	}

	bool check_board()
	{

	}
};