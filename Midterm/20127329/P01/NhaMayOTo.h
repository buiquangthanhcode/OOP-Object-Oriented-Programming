#pragma once
#include"Mayxe.h"
#include"XeThuongMai.h"
class NhaMay
{
private:
	vector<Xe*>list_Xe;
public:
	NhaMay();
	NhaMay(vector<Xe*>);
	NhaMay(const NhaMay &);
	NhaMay operator=(const NhaMay&);
	~NhaMay();
	void input();
	friend ostream& operator<<(ostream& outDev, const NhaMay&);
	Xe LayMauXe(string,string,string);
	XeThuongMai Sanxuat(string,string,string,long);

};