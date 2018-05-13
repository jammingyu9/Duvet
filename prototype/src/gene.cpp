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
	alloc_size = 0;
	gene_size = 0;
}

Gene::Gene(uint64_t len)
{
	alloc_size = len;
	gene = new char[len];
	tail = cur = gene;
	gene_size = 0;
	cout << "GENE: created gene of length " << alloc_size << endl;
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
	return alloc_size;
}

uint64_t Gene::getGeneSize()
{
	return gene_size;
}

void Gene::insert(char _v)
{
	if ((tail - gene) < alloc_size)
	{
		*tail = _v;
		tail++;
		gene_size++;
#ifdef D_P_GENE_DEBUG
		cout << "GENE: insert [" << _v << "]" << endl;
#endif
	}
	else
	{
		cerr << "GENE: cannot insert (Full)" << endl;
	}
}
