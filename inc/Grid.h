#pragma once
#include <vector>
class GridBuilder
{
public:
	GridBuilder(int row, int col);
	GridBuilder();
	~GridBuilder();
	void PrintGrid();
	int GetRows() { return _rows; }
	int GetCols(){return _cols;}
	std::vector<std::vector<int>> _grid;
private:
	int _rows;
	int _cols;
	
};