#pragma once
#include"Point.h"
class Solider
{
protected:
	string namePlayer;
	int floodPlayer;
	Point postion_Solider;
	int attack_Stats;
	int defense_Stats;
	int maxAttack;
	int level_Solider;
	
public:
	Solider();
	Solider(const Solider& s);
	Solider operator= (const Solider & s);
	 void inputSolider();
	 void outputSolider();
	 void set_PosSolider(int x,int y);
	 void set_levelSolider(int level);
	 void set_FloodSolider(int flood);
	 Point getPosSolider();
	 int getAttack_Stats();
	 void setAttack_Stat(int stat_Atack);
	 void set_Level(int level);
	 int get_Level();
	 int getDefenve_Stats();
	 void set_Defence_Stat(int defence);
	 int get_Flood();
	 ~Solider() {};
};