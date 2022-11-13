#pragma once
#pragma once
#include <vector>
class GridBuilder
{
public:
	GridBuilder(int row, int col);
	GridBuilder();
	~GridBuilder();
	void PrintGrid();
private:
	int _rows;
	int _cols;
	std::vector<std::vector<int>> _grid;
};