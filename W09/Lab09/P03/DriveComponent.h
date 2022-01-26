#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class DriveComponent
{
protected:
	string name;
	float size;
public:
	virtual string GetName() = 0;
	virtual float GetSize() = 0;
	virtual void AddComponent(DriveComponent* ifile);
	virtual void RemoveComponent(DriveComponent* ifile);
	virtual void outputFile();
	virtual void outputFolder();
	virtual ~DriveComponent();
};
