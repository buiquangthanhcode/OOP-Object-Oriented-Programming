#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:
	string name;
	string number;
	float average;
public:
	void set(string _name, string _number, float _average);
	string get_Name();
	float get_Average();
	string get_Phone();
	void input_Student();
	void output_Student();
	bool check_Input_Name();
	bool check_Input_Number();
	bool check_Input_Average();
};
#endif