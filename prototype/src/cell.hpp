/* Generic cell type definition for brain.
 * This cell is different from embryonic stem cell
 * for brain. This class is the parent class for 
 * all brain cells.
 * 
 */

class Cell
{
private:
	unsigned int id;
	unsigned int cellType;
public:
	Cell();
	void setCellType(unsigned int);
	unsigned int getCellType();
	void printCellType();
};
