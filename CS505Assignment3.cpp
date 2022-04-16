// CS505Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	Car car1;                                                     //default constructor
	car1.setMaker("Toyota");                                      //setter
	car1.setName("Corolla");                                      //setter
	car1.setModel(2022);                                          //setter

	Car car2("A 180", 2022, "Mercedes");                          //overloaded constructor

	Car car3(car1);                                              // copy constructor

	Car car4 = car2;                                             // copy assignment

	cout << "---------------- Car 1 -----------------" << endl;  //printing car1
	car1.print();

	cout << "---------------- Car 2 -----------------" << endl;  //printing car2
	car2.print();

	cout << "---------------- Car 3 -----------------" << endl;  //printing car3
	car3.print();

	cout << "---------------- Car 4 -----------------" << endl;  //printing car4
	car4.print();


}

