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
public:
	Avtopark();                 //default constructor for writing to a text file
	string name = "Avtoperk D"; //name of the Avtopark
	void print_all();           //a method that outputs all machines
	void sort_years(int);       //a method that outputs all machines older than a given age
	void search_reg(int);       //the method that outputs cars registered in this region
};


// ***METHODES***


//a method that outputs all machines
void Avtopark::print_all() {
	for (int i = 0; i < 5; i++) {
		cout << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t"     //we display the brand of the car
			<< " Year of issue: " << this->years.at(i) << "\t"          //year of release
			<< " Numbers: " << this->numbers.at(i) << "\t"             //numbers(without region)
			<< " Region: " << this->reg.at(i) << endl;                 //region
	}
}

// a method that outputs all machines older than a given age
void Avtopark::sort_years(int x) {
	for (int i = 0; i < 5; i++) {
		if ((current_year - this->years.at(i)) > x) {                         //if the age of the car is greater than the specified number
			cout << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t"  //output auto
				<< " Year of issue: " << this->years.at(i) << "\t"
				<< " Numbers: " << this->numbers.at(i) << "\t"
				<< " Region: " << this->reg.at(i) << endl;
		}
	}
}

//the method that outputs cars registered in this region
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
// ***CONSTRUCTORS***


//Default Constructor
Avtopark::Avtopark() {
	//the constructor is needed in order to write the machine registry to a text file
	ofstream car_reestr;                          //stream to write
	car_reestr.open("car_reestr.txt");            //opening the file for recording
	if (car_reestr.is_open())
	{
		for (int i = 0; i < 5; i++) {
			car_reestr << "car" << i + 1 << " Mark: " << this->marks.at(i) << "\t"   //recording all cars
				<< " Year of issue: " << this->years.at(i) << "\t"
				<< " Numbers: " << this->numbers.at(i) << "\t"
				<< " Region: " << this->reg.at(i) << endl;
		}
	}
	car_reestr.close();                           //closing the file for recording
	cout << "File has been written" << endl;      //notification that the file was successfully written
}
