#include "cell.hpp"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

Cell::Cell()
{
	id = 0;
	gene = NULL;
}

Cell::Cell(uint64_t _id, uint64_t _l)
{
	id = _id;
	gene = new Gene(_l);
}

void Cell::insertGeneInfo(char *_geneInfo)
{
	// Todo
	// Performance issue
	if (gene)
	{
		for (int i=0; i<sizeof(_geneInfo) - 1; i++)
			gene->insert(_geneInfo[i]);
	}
}

