#pragma once
//libraries
#include <iostream>
#include <vector>
#include "Car.h"
#include <string>

using namespace std;
//a class for storing car data
class Car {
private:
	string mark;                            //mark of the car
	unsigned short year;                    //year of issue
	string numbers;                         //numbers of the car
public:
	Car(string mark, unsigned short year, string numbers);     
	string get_mark() { return mark; };                        //we get car mark
	unsigned short get_year() { return year; };                //we get car year of issue
	string get_numbers() { return numbers; };                  //we get car numbers
};

Car::Car(string mark, unsigned short year, string numbers) {
	this->mark = mark;
	this->year = year;
	this->numbers = numbers;
}
