#include "MyClass.h"
//using namespace std;


	/*MyClass:: MyClass(int data)
	{
		this->data = data;
		cout << "Объект " << data << " Вызвался конструктор" << endl;
	}*/
	MyClass::MyClass(int size)//передем динамическую переменную (размер массива)
	{
		arr = new int[size];//указателю присваиваем массив типа int переданного размера size (выделяем дин. память под массив)
		for (int i = 0; i < size; i++)
		{
			
		}		
		cout << "\nОбъект " << arr << " Вызвался конструктор с массивом" << endl;
	}
	MyClass::~MyClass()
	{		
		cout << "\nОбъект " << data << " Вызвался деструктор" << endl;		
	}
