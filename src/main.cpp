#include <iostream>
#include "Grid.h"
#include "Game.h"

int main() {
	GridBuilder newGrid = GridBuilder(20, 20);
	std::cout << std::endl;
	Game newGame(newGrid);
	newGrid.PrintGrid();
	newGame.NextIteration();
	return 0;
}