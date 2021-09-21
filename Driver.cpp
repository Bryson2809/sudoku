/*	Author: Bryson Carroll
	Date: 9/21/2021
	Email: Bryson2809@gmail.com
	Purpose: Runs functions from Board.cpp to make sudoku playable
*/

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