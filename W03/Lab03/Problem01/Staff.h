#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Staff {
private:
	string fulllname;
	int number_Day;
	string ID;
	string level;
	float salary;
public:
	Staff();
	Staff(string, int, string, string, float);
	Staff(string, int);
	Staff(const Staff& staff);
	void set_Fullname(string Fullname);
	void set_Number_Day(int number_Day);
	void set_ID(string ID);
	void set_Level(string level);
	void set_Salary(float salary);
	string get_Fullname();
	int get_Number_Day();
	string get_ID();
	string get_Level();
	float get_Salary();
	void input();
	void constructor_Four_Parameter(); // INPUT and OUTPUT 4 PARAMETER
	void constructor_Two_Parameter(); // INPUT and OUTPUT 2 PARAMETER
	void output();
	bool check_Input_String(string fulllname);
	bool check_Input_Number(int numberDay);
	string take_ID();
	string take_Level(int number);
	float take_Salary(int number);
	void menu_Get_Set(); 
	~Staff() {
	};
		
};
