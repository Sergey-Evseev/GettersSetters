#pragma once
#include <iostream>
using namespace std;

class MyClass
{
	int data;
private:            
	int* arr;//���� ��� ��������� ������������ ������ (��������� �� ���������� size ���� int)
	         // ��������� ���������� ������ 

public:
	//MyClass(int data);//����������� ������ ��������� ����������� ����������	
	MyClass(int size);//�������� ������ ������� ������� ���������
	~MyClass();	
};