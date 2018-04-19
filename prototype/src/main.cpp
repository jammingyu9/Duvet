#include <iostream>
#include "cell.hpp"
using std::cout;
using std::endl;

int main(int argc, char **argv)
{
	// main cell test
	Cell *bacteria;
	

	bacteria = new Cell(1, 32);

	bacteria->insertGeneInfo("GATTACA");

	return 0;
}
