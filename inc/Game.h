#pragma once
#include "Grid.h"

class Game {
public:
	Game();
	Game(GridBuilder &Grid);
	~Game();
	void NextIteration();
	int CountNeighbors(int row, int col, GridBuilder grid);
private:
	GridBuilder _grid;
};