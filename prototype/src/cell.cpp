#ifndef D_P_CELL_HPP
#define D_P_CELL_HPP

#include "cell.hpp"
#include <iostream>
using std::cout;
using std::endl;

Cell::Cell()
{
	id = 0;
	cellType = 0;
}

void Cell::setCellType(unsigned int c)
{
	cellType = c;
}

unsigned int Cell::getCellType()
{
	return cellType;
}

void Cell::printCellType()
{
	std::cout << "cell type: " << cellType << endl;
}

#endif
