#include"Hero.h"
Skill::Skill()
{
	this->skillName ="";
	this->skillLevel = 0;
}

Skill::Skill(unsigned int level)
{
	
	this->skillLevel = level;

}
Skill::Skill(const Skill& s)
{
	this->skillName = s.skillName;
	this->skillLevel = s.skillLevel;
}
Skill::Skill(string _nameskill)
{
	this->skillName = _nameskill;
	this->skillLevel = 0;

}
Skill::Skill(string _nameskill, unsigned int level)
{
	this->skillName = _nameskill;
	this->skillLevel = level;

}
bool Skill::check_Negative(unsigned int a)
{
	if ((int)a < 0)
		return true;
	return false;

}
void Skill::input()
{
	cin.ignore();
	string name;
	unsigned int level;
	cout << "Hay nhap ten Ky nang :";
	getline(cin, name);
	while (1)
	{
		cout << endl << "Hay nhap cap do  :";
		if (cin >> level && !check_Negative(level))
			break;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Hay nhap so duong " << endl;
	}
	set_NameSkill(name);
	set_LevelSkill(level);

}


void Skill::output()
{
	cout << "Ky nang " << endl;
	cout << skillName << " (";
	cout << skillLevel << ")" << endl;
}
void Skill::set_NameSkill(string name )
{
	this->skillName = name;
}
void Skill::set_LevelSkill(unsigned int level)
{
	this->skillLevel = level;
}
string Skill::get_NameSkill()
{
	return this->skillName;
}
unsigned int Skill::get_LevelSkill()
{
	return this->skillLevel;
}
Skill::~Skill()
{
	
}