#include "cell.hpp"
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
#include <string>
using std::string;
#include <random>

Cell::Cell()
{
	gene = NULL;
}

Cell::Cell(uint64_t gene_len)
{
	gene = new Gene(gene_len);
}

void Cell::allocGene(uint64_t gene_len)
{
	gene = new Gene(gene_len);
}

void Cell::generateRandomGene()
{
	uint32_t seed = 1234;
	std::default_random_engine dre(seed);
	std::uniform_int_distribution<int32_t> dre_dist(65, 90);

	if ((gene != NULL) && (gene->getGeneSize() == 0))
	{
		for (int i=0; i<gene->getAllocSize(); i++)
			gene->insert(static_cast<char>(dre_dist(dre)));
	}
	else
		cerr << "[ERR] Gene not allocated." << endl;
}

void Cell::insertGeneInfo(const char *_geneInfo)
{
	// Todo
	// Performance issue
	if (gene)
	{
		for (int i=0; i<sizeof(_geneInfo) - 1; i++)
			gene->insert(_geneInfo[i]);
	}
}

