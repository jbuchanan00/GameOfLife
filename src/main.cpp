#include <iostream>
#include "Grid.h"
#include "Game.h"

int main() {

	GridBuilder newGrid = GridBuilder();
	newGrid.PrintGrid();
	std::cout << std::endl;
	Game newGame(newGrid);
	newGrid.PrintGrid();
	return 0;
}