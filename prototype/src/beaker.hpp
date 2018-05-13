#ifndef D_P_BEAKER_HPP
#define D_P_BEAKER_HPP

#include "cell.hpp"

class Beaker
{
private:
	Cell *cell_group;
public:
	Beaker();
	~Beaker();
	void putCells(Cell *);
	void broadcast(float);
};


#endif
