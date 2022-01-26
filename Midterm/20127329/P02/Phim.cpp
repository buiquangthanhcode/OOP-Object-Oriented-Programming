#include"Phim.h"
Phim::Phim()
{
	this->name = "NULL";
	this->phut = 0;
	this->name = 1;
}
Phim::Phim(string _name, int  _phut, int  _sonam)
{
	this->name = "NULL";
	this->phut = 0;
	this->sonam = 1;
}
Phim::Phim(const Phim& p)
{
	this->name = p.name;
	this->phut = p.phut;
	this->name = p.sonam;
}	
Phim::~Phim()
{

}
void Phim::set_Name(string _name)
{
	this->name = _name;
}
void Phim::set_Phut(int _phut)
{
	this->phut = _phut;
}
void Phim::set_Sonam(int _sonam)
{
	this->sonam = _sonam;
}
