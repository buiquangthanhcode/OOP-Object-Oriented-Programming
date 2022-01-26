#pragma once
#include"DriveComponent.h"
class File : public DriveComponent
{
public:
	File();
	File(string, float);
	string GetName();
	float GetSize();
	void outputFile(); // ham xuat file 
	void  inputFile(); // ham nhap ten file 
	~File();
};