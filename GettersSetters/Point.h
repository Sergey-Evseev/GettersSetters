#pragma once;
using namespace std;

class Point{ 
private:
	int x;
	int y;

public: 
	Point(int x, int y); //����������� ����������� ��� ���������. 
	//������ ���� � public ������ ������, ����� ��� ����� ���� ������������ �����

	Point();//��������� ����������� � ����������� � ����
	
public: //������ ������ ���� public ��� ������ � ���
	int GetX(); 
	void SetX(int x); 
	int GetY(); 
	void SetY(int y);

	void Print();	
};