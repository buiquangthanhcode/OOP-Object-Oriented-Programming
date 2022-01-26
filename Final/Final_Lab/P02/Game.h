#pragma once
#include"Monster.h"
#include"ConstructionSpecial.h"
#include"Player.h"
#include"jungleMonster.h"
#include"Solider.h"
#define WIDH 8
#define LENGTH 8

class Game
{
protected:
	Point p;
	Player Y;
	Monster* M;
	Solider S;
	Construction* C;
	static char matrix[WIDH][LENGTH];
	
	 vector<Point>postionNonObstacle;
	 vector<Point>PostionMoneter;  // recomment cho người dùng 
	 vector<Point>PostionConstruction;
	 vector<Point>PostionSolider;
	 vector<Point>PostionPlayer;
	vector<Solider>list_Solider;
	vector<Monster*>list_Monter;
	
	vector<Construction*>list_Construcion;
public:
	
	int  Randomint(int min, int max);
	void printmatix();
	void initMatrix();
	void initGame();
	void fixTestCharacter();
	void FindIndexPoint(char c);
	void showPostionNonObstacble();
	void showPostionMonster();
	void showPostionConstruction();
	void showPostionSolider();
	void showPostionPlayer();
	void updatePostionPlayer();
	void findCharacterInMaTrix(char c, Point& s);
	void replace(char c, Point s);
	void set_And_Replace(int x, int y, char c);
	void FuntionOfPlayer();
	void FunctionofMonster();
	void FunctionofSolider();
	void FunctionOfConstruction();
	void takePostionOfAll();
	bool findPointinVector(vector<Point>vt,Point pos);
	Solider getSolider(Point pos);
	void removeAllvector();
	void menuGAME();
	~Game();
	
	
};
