#pragma once
#include"DriveComponent.h"
class Folder:public DriveComponent
{
	vector<DriveComponent*> components;
public:
	Folder();
	Folder(string, float);
	string GetName();
	float  GetSize(); // ham tinh tong 
	void AddComponent(DriveComponent* iComp);
	void RemoveComponent(DriveComponent* iComp);
	 void outputFile(); // ham xuat cac thuoc tinh cua file 
	 void outputFolder();// ham xuat cac thuoc tinh cua folder
	 void outputComponent(); // Ham xuat tat cac cac folder va file 
	 void  inputFolder(); // ham nhap ten folder
	~Folder();


};