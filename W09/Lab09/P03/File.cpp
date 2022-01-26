#include"File.h"
File::File()
{
	this->name = "NULL";
	this->size = 0;
}
File::File(string _name, float _size)
{
	this->name = _name;
	this->size = _size;

}

string File::GetName()
{
	return this->name;
}
float File::GetSize()
{
	return this->size;
}
File::~File() 
{

}
void File::outputFile()
{
	cout << "Ten File : " << this->name << endl;
	cout << "Kich Co :" << this->GetSize() << endl;
}
void  File::inputFile()
{
	cout << "Hay Nhap Ten File : ";
	getline(cin, this->name);
	cout << "Hay Nhap Size :";
	cin >> this->size;
}
