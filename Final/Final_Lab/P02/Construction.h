#include"Point.h"
class Construction
{
protected:
	string nameConstruction;
	Point postion_Construction;
public:
	Construction();
	Construction(string, Point);
	virtual void DisappearConstruction();
	virtual void inputConstruction();
	virtual void outputContrucion();
	virtual void set_PointCons(int x,int y);
	virtual ~Construction();
};
