/* Electric cell.
 * 
 * 
 */

#ifndef D_P_CELL_HPP
#define D_P_CELL_HPP

#include <cstdint>

#include "gene.hpp"

class Cell
{
private:
	/* follows biological model */
	Gene *gene;
public:
	Cell();
	Cell(uint64_t);

	void allocGene(uint64_t);
	void generateRandomGene();
	void insertGeneInfo(const char *);
};

#endif
