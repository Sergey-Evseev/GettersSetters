#include "MyClass.h"
//using namespace std;


	/*MyClass:: MyClass(int data)
	{
		this->data = data;
		cout << "������ " << data << " �������� �����������" << endl;
	}*/
	MyClass::MyClass(int size)//������� ������������ ���������� (������ �������)
	{
		arr = new int[size];//��������� ����������� ������ ���� int ����������� ������� size (�������� ���. ������ ��� ������)
		for (int i = 0; i < size; i++)
		{
			
		}		
		cout << "\n������ " << arr << " �������� ����������� � ��������" << endl;
	}
	MyClass::~MyClass()
	{		
		cout << "\n������ " << data << " �������� ����������" << endl;		
	}
