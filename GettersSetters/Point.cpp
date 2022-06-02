#include "Point.h"
#include <iostream>;

Point::Point(int x, int y)//implementation of member function defined in header file - with 2 parameters
{                         //реализация конструктора класса 
	this->x = x;
	this->y = y;
	cout << "Constructor address: " << this << endl;
	cout << "x = " << x << " address: " << &x << endl;
	cout << "y = " << y << " address: " << &y << endl;

	}
Point::Point() //реализация дефолтного конструктора
{
	x = 0;
	y = 0;
}

int Point::GetX()
{
	return x;
}

void Point::SetX(int x)
{
	this->x = x;
}

int Point::GetY()
{
	return y;
}

void Point::SetY(int y)
{
	this->y = y;
}

void Point::Print() {
	std::cout << "X = " << x << "\t Y = " << y << endl; 
}
