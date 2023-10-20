#pragma once
//библиотеки
#include <iostream>
#include <vector>
#include "Car.h"
#include <string>

using namespace std;
//класс для хранения данных автомобиля 
class Car {
public:
	vector<string> marks = { "BMW  ", "Mersedec", "Lada  ","Dodge", "Nissan" };    //вектор марок автомобилей
	vector<short int> years = { 2014, 2011, 2007, 2022, 2000 };                  //вектор содержащий год выпуска автомобилей
	vector<string> numbers = { "S228GH", "F445TR", "O565KI","N785MO","G224BV" };     //вектор содержащий номера автомобилей
	vector<int> reg = { 23, 15, 34, 54, 15 };                               //вектор с регионами авто
};
