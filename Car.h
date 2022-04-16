#pragma once
#include <string>
using namespace std;

class Car
{
private:
	string Name;
	int Model;
	string Maker;
	


public:
	Car();
	Car(string name, int model, string maker);
	~Car();
	void setName(string name);
	void setModel(int model);
	void setMaker(string maker);
	string getName();
	int getModel();
	string getMaker();
	void print();
};

	
