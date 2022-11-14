#include "Game.h"
#include <ctime>
#include <iostream>

Game::Game() {

}

Game::Game(GridBuilder &grid) {
	_grid = grid;
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	for (int i = 0; i < grid.GetRows(); i++) {
		for (int j = 0; j < grid.GetCols(); j++) {
			int aliveNum = std::rand();

			if (aliveNum % 10 < 4) {
				grid._grid[i][j] = 1;
			}
		}
	}
}

Game::~Game() {

}

void Game::NextIteration() {
	for (int i = 0; i < _grid.GetRows(); i++) {
		for (int j = 0; j < _grid.GetCols(); j++) {
			std::cout << CountNeighbors(i, j, _grid) << " ";
		}
	}
}

int Game::CountNeighbors(int row, int col, GridBuilder grid) {
	int count = 0;
	for (int i = -1; i < 2; i++) {
		for (int j = -1; j < 2; j++) {
			if ((i == 0 && j == 0) || (row == 0 && i == -1) || (col == 0 && j == -1) || (i > grid.GetRows() - 1) || (j > grid.GetCols() - 1)) {
				continue;
			}
			if (grid._grid[i][j] == 1) {
				count++;
			}
		}
	}
	return count;
}