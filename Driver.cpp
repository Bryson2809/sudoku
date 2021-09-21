#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <array>
#include "Board.cpp"

using namespace std;

int main(int argc, char** argv)
{
	Board board;
	
	board.randBoard();

	board.toString();

	return 0;
}