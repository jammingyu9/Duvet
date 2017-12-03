#include <iostream>
#include "cell.hpp"
using std::cout;
using std::endl;

int main(int argc, char **argv)
{

	// main cell test
	unsigned int cellType;
	Cell *cell = new Cell();

	cell->printCellType();
	cell->setCellType(GENE);
	cell->printCellType();	

	return 0;
}
