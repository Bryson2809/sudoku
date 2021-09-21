#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;

class Board
{
public:
	int nums[9][9] = { 
		{0,0,4,0,5,0,0,0,0},
		{9,0,0,7,3,4,6,0,0},
		{0,0,3,0,2,1,0,4,9},
		{0,3,5,0,9,0,4,8,0},
		{0,9,0,0,0,0,0,3,0},
		{0,7,6,0,1,0,9,2,0},
		{3,1,0,9,7,0,2,0,0},
		{0,0,9,1,8,2,0,0,3},
		{0,0,0,0,6,0,1,0,0}
	};
	Board()
	{
		
	}

	~Board()
	{
		
	}

	void toString()
	{
		for (int i = 0; i < sizeof(this->nums[i]) / sizeof(int); i++)
		{
			cout << "  ";
			for (int j = 0; j < sizeof(this->nums[j]) / sizeof(int); j++)
			{
				if ((j + 1) % 3 != 0)
				{
					if (this->nums[i][j] == 0)
						cout << "x ";
					else
						cout << this->nums[i][j] << " ";
				}
					
				else //if ((j + 1) % 3 == 0)
				{
					if (j == 8)
					{
						if (this->nums[i][j] == 0)
							cout << "x";
						else
							cout << this->nums[i][j];
					}
					
					else
					{
						if (this->nums[i][j] == 0)
							cout << "x | ";
						else
							cout << this->nums[i][j] << " | ";
					}
				}
			}
			if ((i + 1) % 3 != 0)
				cout << endl;
			else if (i != 8)
				cout << "\n" << "-------------------------" << endl;
		}
		cout << endl;
	}

	void randBoard()
	{
		//srand
	}
};