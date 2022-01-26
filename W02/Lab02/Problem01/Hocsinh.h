#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Student
{
	string name;
	string number;
	float average;
public:
	void input_Student();
	void output_Student();
	bool check_Input_Name();
	bool check_Input_Number();
	bool check_Input_Average();
};
