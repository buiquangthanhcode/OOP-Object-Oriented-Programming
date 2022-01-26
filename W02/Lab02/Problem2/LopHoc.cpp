#include"LopHoc.h"
bool Class::check_Duplicate(string name) // kiem tra xem co ho ten trung nhau hay khong 
{
	for (auto x : class_Student)
	{
		if (x.get_Name() == name)
			return true;
	}
	return false;
}
void Class::add_Student()
{
	Student s;
	s.input_Student();
	
	 if ((!class_Student.empty() && !check_Duplicate(s.get_Name()))|| class_Student.empty())
	 {
		this->class_Student.push_back(s);
		cout << "Add student successfully" << endl;

	 }
	 else 
		 cout << "There are students in the class " << endl;
	
}
int Class::find_Name_To_Remove(string name) // tim ra index can xoa
{
	for (int i = 0; i < class_Student.size(); i++)
		if (class_Student[i].get_Name() == name)
			return i;
		
	return -1;
}
void Class::remove_Student()
{
	string _name;
	cout << "Enter name to remove :";
	getline(cin, _name);
	if (!class_Student.empty())
	{
		int posstion = find_Name_To_Remove(_name);
		if (posstion == -1)
			cout << "There are no students in the class " << endl;
		else
		{
			class_Student.erase(class_Student.begin() + posstion);
			cout << "Delete successfully" << endl;
		}
	}
	else
	{
		cout << "Student list is empty " << endl;
	}
	
	
}
void Class::sort_Decreasingly()
{
	vector<Student>vt=this->class_Student; // tai sao phai co ham nay // tao ra 1 vector moi de vector trong class khong bi thay doi thu tu 
	for (int i = 0; i < vt.size()-1; i++)
		for (int j = i+1; j < vt.size(); j++)
			if (vt[i].get_Average() <= vt[j].get_Average())
				swap(vt[i], vt[j]);
			
	for (int i = 0; i < class_Student.size(); i++)
	{
		cout << "Name :" << vt[i].get_Name() << endl;
		cout << "Phone :" << vt[i].get_Phone() << endl;
		cout << "Average Score :" << vt[i].get_Average() << endl;
	}
		

}
void Class::output_Class()
{
	Student s;
	if (!this->class_Student.empty())
	{
		for (int i = 0; i < class_Student.size(); i++)
		{
			s.set(class_Student[i].get_Name(), class_Student[i].get_Phone(), class_Student[i].get_Average());

			s.output_Student();
		}
	}
	else
	{
		cout << "Student list is empty " << endl;
	}
	
}
void Class::set_Class(Student& s)
{
	this->class_Student.push_back(s);
}
void Class::read_File()
{
	
	this->class_Student.clear(); //Can xoa het sinh vien trong danh sach cu de doc tu file 
	fstream infile;
	Student s;
	string name, number;
	float average;
	int numberStudent = 0;
	infile.open("LopHoc.txt", ios::in);
	if (infile.is_open())
	{
		infile >> numberStudent;
		infile.ignore();
		for (int i = 0; i < numberStudent; i++)
		{
			getline(infile, name);
			infile >> number;
			infile.ignore();
			infile >> average;
			infile.ignore();
			s.set(name, number, average);
			set_Class(s);
		}
	}
	else cout << "Unable to open file";

	infile.close();
		
}