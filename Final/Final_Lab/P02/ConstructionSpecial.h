#pragma once
#include"Construction.h"

class ConstructionSpecial :public Construction
{
public:
	ConstructionSpecial();
	void inputConstruction();
	void outputContrucion();
    void set_PointCons(int x, int y);
	void DisappearConstruction();
	~ConstructionSpecial();
};