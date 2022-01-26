#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include<vector>
using namespace std;
class Phim
{
private:
	string name;
	int phut;
	int sonam;
public:
	Phim();
	Phim(string, int, int);
	Phim(const Phim&);
	~Phim();
	void set_Name(string _name);	
	void set_Phut(int _phut);
	void set_Sonam(int _sonam);


};