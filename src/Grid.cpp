#include "Grid.h"
#include <vector>
#include <iostream>

GridBuilder::GridBuilder(int row, int col) {
	std::vector<std::vector<int>> grid;
	for (int i = 0; i < row; i++) {
		std::vector<int> row;
		grid.push_back(row);
		for (int j = 0; j < col; j++) {
			grid[i].push_back(0);
		}
	}
	_rows = row;
	_cols = col;
	_grid = grid;
}

GridBuilder::GridBuilder() {
	//will default as a 10x10 grid
	std::vector<std::vector<int>> grid;
	for (int i = 0; i < 10; i++) {
		std::vector<int> row;
		grid.push_back(row);
		for (int j = 0; j < 10; j++) {
			grid[i].push_back(0);
		}
	}
	_rows = 10;
	_cols = 10;
	_grid = grid;
}

GridBuilder::~GridBuilder() {}

void GridBuilder::PrintGrid() {
	for (int i = 0; i < _cols; i++) {
		for (int j = 0; j < _rows; j++) {
			std::cout << _grid[i][j];
		}
		std::cout << std::endl;
	}
}
