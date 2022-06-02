#pragma once;
using namespace std;

class Point{ 
private:
	int x;
	int y;

public: 
	Point(int x, int y); //конструктор принимающий два параметра. 
	//Должен быть в public секции класса, чтобы его можно было использовать извне

	Point();//дефолтный конструктор с реализацией в теле
	
public: //методы должны быть public для достпа к ним
	int GetX(); 
	void SetX(int x); 
	int GetY(); 
	void SetY(int y);

	void Print();	
};