
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#define MAX 100
using namespace std;
#include"Skill.h"
class Hero
{
	string heroName;
	unsigned int heroHealth;
	unsigned int heroMana;
	unsigned int heroLevel;
	vector<Skill*> skillList;
public:
	Hero();
	Hero(string);
	Hero(vector<Skill*> skillList);
	Hero(string, unsigned int ); 
	Hero(string, unsigned int,unsigned int );
	Hero(string, unsigned int, unsigned int , unsigned int); 
	Hero(string, unsigned int, unsigned int, unsigned int , vector <Skill*> Vector_Skill);
	Hero(string, unsigned int, vector <Skill*> Vector_Skill);
	Hero(const Hero& h);
	string get_HeroName();
	unsigned int get_HeroHealth();
	unsigned int get_HeroMana();
	unsigned int get_HeroLevel();
	vector<Skill*> get_Skill_List();
	void set_HeroName(string name);
	void set_heroHealth(unsigned int& health);
	void set_heroMana(unsigned int& mana);
	void set_heroLevel(unsigned int& level);
	void set_Skill_List(const vector<Skill*>&vt);
	friend istream& operator>>(istream& inDev,  Hero& h);
	friend ostream& operator<<(ostream& outDev, const Hero& h);
	bool check_Negative(unsigned int a);
	bool check_Level_To_Push_Back(unsigned int _level);
	void input_N_Skill_To_Remove();
	void input_Unsigned_Int(string name_Tiltle,unsigned int& a);
	void menu();
	~Hero();


};