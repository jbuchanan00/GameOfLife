#include "Game.h"
#include <ctime>

Game::Game() {

}

Game::Game(GridBuilder &grid) {
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