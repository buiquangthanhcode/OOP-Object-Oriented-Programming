#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<string>
using namespace std;
#include"Student.h"
class Class{
private:
	vector<Student>class_Student;
public :
	void set_Class(Student& s);
	bool check_Duplicate(string name);
	void add_Student();
	void remove_Student();
	int find_Name_To_Remove(string name);
	void sort_Decreasingly();
	void output_Class();
	void read_File();
	
};

