#include "gene.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cerr;

#define D_P_GENE_DEBUG

Gene::Gene()
{
	gene = NULL;
	tail = NULL;
	allocSize = 0;
}

Gene::Gene(uint64_t _l)
{
	allocSize = _l;
	gene = new char[_l];
	tail = cur = gene;
	cout << "Created gene of length: " << allocSize << endl;
}

Gene::~Gene()
{
	delete gene;	
}

char *Gene::getHeader()
{
	return gene;
}

uint64_t Gene::getAllocSize()
{
	return allocSize;
}

void Gene::insert(char _v)
{
	if ((tail - gene) < allocSize)
	{
		*tail = _v;
		tail++;
#ifdef D_P_GENE_DEBUG
		cout << "GENE: insert [" << _v << "]" << endl;
#endif
	}
	else
	{
		cerr << "GENE: cannot insert (Full)" << endl;
	}
}
