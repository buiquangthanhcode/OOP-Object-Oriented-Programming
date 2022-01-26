#include"Folder.h"
Folder::Folder()
{
	this->name = "NULL";
	this->size = 0;
}
Folder::Folder(string _name,  float _size)
{
	this->name = _name;
	this->size = _size;
}
string Folder::GetName()
{
	return this->name;
}

float  Folder::GetSize()
{
	float totalSize = 0;
	for (int i = 0; i < components.size(); i++)
		totalSize += components[i]->GetSize() ; 
	return totalSize;

}
void  Folder::AddComponent(DriveComponent* iComp)
{
	if (iComp == nullptr)
	{
		return;
	}
	else
	{
		components.push_back(iComp);
		
	}
}
void Folder::RemoveComponent(DriveComponent* iComp)
{
	vector<DriveComponent*>temp;
	for (int i = 0; i < components.size(); i++)
	{
		if (components[i]->GetName() != iComp->GetName())
		{
			temp.push_back(components[i]);
		}
	}
	components = temp;
}
Folder::~Folder()
{
	

}
void Folder::outputFile()
{
	for (int i = 0; i < components.size(); i++)
		components[i]->outputFile();
		
}
void Folder::outputFolder()
{
	cout << "Ten Folder : " << this->name << endl;
	cout << "Size Folder : " << this->GetSize() << endl;
}
void Folder::outputComponent()
{
	this->outputFolder();
	cout << "Danh Sach Chua " << endl;
	for (int i = 0; i < components.size(); i++)
	{
		components[i]->outputFolder();
		components[i]->outputFile();
	}
}

void Folder::inputFolder()
{

	cout << "Hay Nhap Ten File : ";
	getline(cin, this->name);
	/*cout << "Hay Nhap Size :";  // size folder dc tinh dua vao nhung file con chua trong folder
	cin >> this->size;*/
}