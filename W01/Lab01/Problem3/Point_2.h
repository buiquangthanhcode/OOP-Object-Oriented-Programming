#pragma once
#include<iostream>
#include<cmath>
#include<math.h>
#define EPSILON 0.01f
using namespace std;
class Point {
	float x, y;
public:
	void set(float _x, float _y);
	float get_X(); // hàm lấy ra giá trị X
	float get_Y(); // hàm lấy ra giá trị Y
	void output();
	float calculate_Distance(Point& P1, Point& P2);  // hàm tính toán khoảng cách giữa hai điểm 
};
class Point_2
{
	Point p1, p2, p3, p4;
public:
	void set(Point& p1, Point& p2, Point& p3, Point& p4);
	void input_Point_2(); // hàm nhập
	void output_Point_2(); // hàm xuất 
	bool compare(float a, float b); // hàm so sánh hai giá trị là kiểu số thực
	bool check_True_False(); // kiểm tra tính hợp lệ 
	bool check_Right_Triangle(float a, float b, float c); // kiểm tra tam giác vuông 
	void calculate_Perimeter_Are(); // tính toán chu vi và diện tích 
};
