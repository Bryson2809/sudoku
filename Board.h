#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Board
{
public:
	Board();
	~Board();

	void toString();

private:
	int ** nums;
};