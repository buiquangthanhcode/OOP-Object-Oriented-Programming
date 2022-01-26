#include"Construction.h"
void Construction::inputConstruction()
{
	
}
void Construction::outputContrucion()
{
	
}
Construction::Construction()
{
	this->nameConstruction = "NULL";
	this->postion_Construction.set_X(0);
	this->postion_Construction.set_Y(0);

}
Construction::Construction(string name, Point pos)
{
	this->nameConstruction = name;
	this->postion_Construction = pos;
}
void Construction::DisappearConstruction()
{

}
void Construction::set_PointCons(int x,int y)
{
	
}
Construction::~Construction()
{

}