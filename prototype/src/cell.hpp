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
	uint64_t id;
	Gene *gene;
public:
	Cell();
	Cell(uint64_t, uint64_t);

	void insertGeneInfo(char *);
};

#endif
