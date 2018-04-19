/* Genes
 *
 *
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
	uint64_t allocSize;
	
public:
	Gene();
	Gene(uint64_t);

	~Gene();

	char *getHeader();
	uint64_t getAllocSize();
	void insert(char);
};

#endif
