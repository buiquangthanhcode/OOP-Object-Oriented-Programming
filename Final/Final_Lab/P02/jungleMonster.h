#pragma once
#include"Monster.h"
class JungleMonster:public Monster
{
private:
	int explosionPoint;
	Point postionJungle;

public:
	void inputMonster();
	void outputMoster();
	void set_Postion(int x,int y);
	void set_explosionPoint(int score);
	int attack_Solider();
	void updateLevel();
	void set_PostionMonster(int x, int y);
	void decresingFlood(int amount);
	~JungleMonster() {};
};