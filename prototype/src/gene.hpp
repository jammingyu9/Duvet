/* Genes
 *
 * genes are functional codes for cells. 
 * cells produce or do something based on these codes.
 * (translation of genes are also coded in genes)
 * the important questions are
 *
 * 1) will genes make cells able to evolve as time flows?
 * 2) will genes make cells to adapt on different environments?
 * 
 * that is, - will genes make cells to be able to survive wherever they are? -
 */

#ifndef D_P_GENE_HPP
#define D_P_GENE_HPP

#include <cstdint>

class Gene
{
private:
	char *gene;
	char *cur;
	char *tail;
	uint64_t alloc_size;
	uint64_t gene_size;
	
public:
	Gene();
	Gene(uint64_t);

	~Gene();

	char *getHeader();
	uint64_t getAllocSize();
	uint64_t getGeneSize();
	void insert(char);
};

#endif
