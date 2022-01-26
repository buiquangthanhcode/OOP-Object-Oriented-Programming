
#ifndef _SKILL_H
#define _SKILL_H

class Skill
{
private:
	string skillName;
	unsigned int skillLevel;
public:
	Skill();
	Skill(string _nameSkill);
	Skill(string _nameSkill,unsigned int);
	Skill(unsigned int);
	Skill(const Skill& s);
	void input();
	void output();
	bool check_Negative(unsigned int a);
	void set_NameSkill(string name );
	void set_LevelSkill(unsigned int  level );
	string get_NameSkill();
	unsigned int get_LevelSkill();
	~Skill();
	
};

#endif // !_SKILL_H