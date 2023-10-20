#pragma once
//libraries
#include <iostream>
#include <vector>
#include "Car.h"
#include <string>

using namespace std;
//a class for storing car data
class Car {
public:
	vector<string> marks = { "BMW  ", "Mersedec", "Lada  ","Dodge", "Nissan" };    //vector of car brands
	vector<short int> years = { 2014, 2011, 2007, 2022, 2000 };                  //vector containing the year of manufacture of cars
	vector<string> numbers = { "S228GH", "F445TR", "O565KI","N785MO","G224BV" };     //vector containing car numbers
	vector<int> reg = { 23, 15, 34, 54, 15 };                               //vector with auto regions
};
