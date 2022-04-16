#include "Car.h"
#include <iostream>

Car::Car()
{
}

Car::Car(string name, int model, string maker) :Name(name), Model(model), Maker(maker)
{
}

Car::~Car()
{
}

void Car::setName(string name)
{
	Name = name;
}

void Car::setModel(int model)
{
	Model = model;
}

void Car::setMaker(string maker)
{
	Maker = maker;
}

string Car::getName()
{
	return Name;
}

int Car::getModel()
{
	return Model;
}

string Car::getMaker()
{
	return Maker;
}

void Car::print()
{
	cout << "Name: " << Name << endl;
	cout << "Model: " << Model << endl;
	cout << "Maker: " << Maker << endl;
}
