#pragma once
#include <iostream>
using namespace std;

class MyClass
{
	int data;
private:            
	int* arr;//поле для выделения динамической памяти (указатель на переменную size типа int)
	         // приватная переменная класса 

public:
	//MyClass(int data);//конструктор класса принимает статическую переменную	
	MyClass(int size);//передаем размер массива интовым значением
	~MyClass();	
};