#pragma once
//подключаем библиотеки
#include <fstream>
#include <iostream>
#include <vector>
#include "Car.h"
#include <string>


const int current_year = 2023;
//класс автопарк выполняет различные методы связанные с классом "Car"
class Avtopark : public Car {   //наследуем от класса "Car"
public:
	Avtopark();                 //конструктор по умолчанию для записи в текстовый файл
	string name = "Avtoperk D"; //название автопарка
	void print_all();           //метод который выводит все машины 
	void sort_years(int);       //метод который выводит все машины старше заданого возраста 
	void search_reg(int);       //метод выводящий авто зарегестрированные в данном регионе
};


// ***МЕТОДЫ***


//метод который выводит все машины 
void Avtopark::print_all() {
	for (int i = 0; i < 5; i++) {
		cout << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t" //выводим марку авто
			<< " Year of issue: " << this->years.at(i) << "\t"          //год выпска
			<< " Numbers: " << this->numbers.at(i) << "\t"             //номера(без региона)
			<< " Region: " << this->reg.at(i) << endl;                 //регион
	}
}

//метод который выводит все машины старше заданого возраста 
void Avtopark::sort_years(int x) {
	for (int i = 0; i < 5; i++) {
		if ((current_year - this->years.at(i)) > x) {                         //если возраст авто больше заданного числа 
			cout << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t"  //выводим авто
				<< " Year of issue: " << this->years.at(i) << "\t"
				<< " Numbers: " << this->numbers.at(i) << "\t"
				<< " Region: " << this->reg.at(i) << endl;
		}
	}
}

//метод выводящий авто зарегестрированные в данном регионе
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
// ***КОНСТРУКТОРЫ***


//Конструктор по умолчанию
Avtopark::Avtopark() {
	//конструктор нужен для того,чтобы записать реестр машин в текстовый файл
	ofstream car_reestr;                          //поток для записи
	car_reestr.open("car_reestr.txt");            //открываем файл для записи
	if (car_reestr.is_open())
	{
		for (int i = 0; i < 5; i++) {
			car_reestr << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t"   //записываем все машины
				<< " Year of issue: " << this->years.at(i) << "\t"
				<< " Numbers: " << this->numbers.at(i) << "\t"
				<< " Region: " << this->reg.at(i) << endl;
		}
	}
	car_reestr.close();                           //закрываем файл для записи
	cout << "File has been written" << endl;      //уведомление о том,что файл был успешно записан 
}
