#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Board
{
public:
	int nums[9][9] = { {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9} };

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
					cout << this->nums[i][j] << " ";
				else if ((j + 1) % 3 == 0)
				{
					if (j == 8)
						cout << this->nums[i][j];
					else
						cout << this->nums[i][j] << " | ";
				}
			}
			if ((i + 1) % 3 != 0)
				cout << endl;
			else if (i != 8)
				cout << "\n" << "-------------------------" << endl;
		}
		cout << endl;
	}
};