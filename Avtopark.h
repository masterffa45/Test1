#pragma once
//���������� ����������
#include <fstream>
#include <iostream>
#include <vector>
#include "Car.h"
#include <string>


const int current_year = 2023;
//����� �������� ��������� ��������� ������ ��������� � ������� "Car"
class Avtopark : public Car {   //��������� �� ������ "Car"
public:
	Avtopark();                 //����������� �� ��������� ��� ������ � ��������� ����
	string name = "Avtoperk D"; //�������� ���������
	void print_all();           //����� ������� ������� ��� ������ 
	void sort_years(int);       //����� ������� ������� ��� ������ ������ �������� �������� 
	void search_reg(int);       //����� ��������� ���� ������������������ � ������ �������
};


// ***������***


//����� ������� ������� ��� ������ 
void Avtopark::print_all() {
	for (int i = 0; i < 5; i++) {
		cout << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t" //������� ����� ����
			<< " Year of issue: " << this->years.at(i) << "\t"          //��� ������
			<< " Numbers: " << this->numbers.at(i) << "\t"             //������(��� �������)
			<< " Region: " << this->reg.at(i) << endl;                 //������
	}
}

//����� ������� ������� ��� ������ ������ �������� �������� 
void Avtopark::sort_years(int x) {
	for (int i = 0; i < 5; i++) {
		if ((current_year - this->years.at(i)) > x) {                         //���� ������� ���� ������ ��������� ����� 
			cout << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t"  //������� ����
				<< " Year of issue: " << this->years.at(i) << "\t"
				<< " Numbers: " << this->numbers.at(i) << "\t"
				<< " Region: " << this->reg.at(i) << endl;
		}
	}
}

//����� ��������� ���� ������������������ � ������ �������
void Avtopark::search_reg(int v) {
	for (int i = 0; i < 5; i++) {
		if (this->reg.at(i) = v) {
			cout << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t"
				<< " Year of issue: " << this->years.at(i) << "\t"
				<< " Numbers: " << this->numbers.at(i) << "\t"
				<< " Region: " << this->reg.at(i) << endl;
		}
		else {
			cout << "no such region" << endl;
		}
	}
}
// ***������������***


//����������� �� ���������
Avtopark::Avtopark() {
	//����������� ����� ��� ����,����� �������� ������ ����� � ��������� ����
	ofstream car_reestr;                          //����� ��� ������
	car_reestr.open("car_reestr.txt");            //��������� ���� ��� ������
	if (car_reestr.is_open())
	{
		for (int i = 0; i < 5; i++) {
			car_reestr << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t"   //���������� ��� ������
				<< " Year of issue: " << this->years.at(i) << "\t"
				<< " Numbers: " << this->numbers.at(i) << "\t"
				<< " Region: " << this->reg.at(i) << endl;
		}
	}
	car_reestr.close();                           //��������� ���� ��� ������
	cout << "File has been written" << endl;      //����������� � ���,��� ���� ��� ������� ������� 
}
