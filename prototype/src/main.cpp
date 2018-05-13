#include <iostream>
using std::cout;
using std::endl;
#include "cell.hpp"
#include "beaker.hpp"

int main(int argc, char **argv)
{
	// main cell test
	Cell *bacteria;
	

	bacteria = new Cell(32);

	bacteria->insertGeneInfo("GATTACA");


	/* Archean Eon */
	Cell *cells = new Cell[20]; // will they survive?..
	for (int i=0; i<20; i++)
	{
		cells[i].allocGene(1);
		cells[i].generateRandomGene();
	}

	// let there be space and time
	Beaker beaker;

	// co-exist
	beaker.putCells(cells);
	beaker.broadcast(3.0);

	return 0;
}
