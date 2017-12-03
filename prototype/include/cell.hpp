/* Electric cell.
 * 
 * 
 */

#ifndef D_P_CELL_HPP
#define D_P_CELL_HPP


enum CellType {GENE = 0, NOGENE};

class Cell
{
private:
	unsigned long long id;
	CellType cellType;
public:
	Cell();

	void setCellType(CellType);
	CellType getCellType();
	void printCellType();
};

#endif
