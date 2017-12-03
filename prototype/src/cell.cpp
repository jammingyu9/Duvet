#include "cell.hpp"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

Cell::Cell()
{
	id = 0;
	cellType = NOGENE;
}

void Cell::setCellType(CellType c)
{
	cellType = c;
}

CellType Cell::getCellType()
{
	return cellType;
}

void Cell::printCellType()
{
	string ct;
	switch (cellType)
	{
		case GENE:
			ct = "gene";
			break;
		case NOGENE:
			ct = "no gene";
			break;
	}
	std::cout << "cell type: " << ct << endl;
}
