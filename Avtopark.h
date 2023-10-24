#pragma once
//connecting libraries
#include <fstream>
#include <iostream>
#include <vector>
#include "Car.h"
#include <string>


const int current_year = 2023;
//the fleet class executes various methods associated with the class "Car"
class Avtopark : public Car {   //inheriting from the class "Car"
private:
	string name;                //name of avtopark
	vector<Car> cars;           //vector with our cars
public:
	void add_car(Car car) { cars.push_back(car); };   //add new car
	Avtopark(string name);                            //default constructor for writing to a text file

	void print_all();                                 //a method that outputs all machines
	void sort_years(int);                             //a method that outputs all machines older than a given age 
	void search_reg(string region);                   //the method that outputs cars registered in this region
};


// ***METHODES***


//a method that outputs all machines
void Avtopark::print_all() {
	for (int i = 0; i < cars.size(); i++) {
		cout << " Mark: " << cars[i].get_mark() << "\t"                        //we display the brand of the car
			<< " Year of issue: " << cars[i].get_year() << "\t"                //year of release
			<< " Numbers: " << this->cars[i].get_numbers() << "\t" << endl;    //numbers
	}
}

//a method that outputs all machines older than a given age
void Avtopark::sort_years(int x) {
	for (int i = 0; i < cars.size(); i++) {
		if (current_year - cars[i].get_year() > x) {                         //if the age of the car is greater than the specified number
			cout << " Mark: " << cars[i].get_mark() << "\t"                      
				<< " Year of issue: " << cars[i].get_year() << "\t"               
				<< " Numbers: " << this->cars[i].get_numbers() << "\t" << endl;
		}
	}
}

//the method that outputs cars registered in this region
void Avtopark::search_reg(string region) {
	for (int i = 0; i < cars.size(); i++) {
		string car_region = cars[i].get_numbers().substr(6, 2);             //we choose only our region
		if (car_region == region) {
			cout << " Mark: " << cars[i].get_mark() << "\t"
				<< " Year of issue: " << cars[i].get_year() << "\t"
				<< " Numbers: " << this->cars[i].get_numbers() << "\t" << endl;
		}
		else {
			cout << "no such region" << endl;
		}
	}
}
// ***CONSTRUCTORS***



Avtopark::Avtopark(string name) {
	//the constructor is needed in order to write the machine registry to a text file
	this->name = name;                            //name of avtopark
	ofstream car_reestr;                          //stream to write
	car_reestr.open("car_reestr.txt");            //opening the file for recording
	if (car_reestr.is_open())
	{
		for (int i = 0; i < cars.size(); i++) {
			car_reestr  << " Mark: " << cars[i].get_mark() << "\t"   //recording all cars
				<< " Year of issue: " << cars[i].get_year() << "\t"
				<< " Numbers: " << this->cars[i].get_numbers() << "\t" << endl;
		}
	}
	car_reestr.close();                           //closing the file for recording
	cout << "File has been written" << endl;      //notification that the file was successfully written
}
