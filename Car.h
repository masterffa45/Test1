#pragma once
//����������
#include <iostream>
#include <vector>
#include "Car.h"
#include <string>

using namespace std;
//����� ��� �������� ������ ���������� 
class Car {
public:
	vector<string> marks = { "BMW  ", "Mersedec", "Lada  ","Dodge", "Nissan" };    //������ ����� �����������
	vector<short int> years = { 2014, 2011, 2007, 2022, 2000 };                  //������ ���������� ��� ������� �����������
	vector<string> numbers = { "S228GH", "F445TR", "O565KI","N785MO","G224BV" };     //������ ���������� ������ �����������
	vector<int> reg = { 23, 15, 34, 54, 15 };                               //������ � ��������� ����
};
