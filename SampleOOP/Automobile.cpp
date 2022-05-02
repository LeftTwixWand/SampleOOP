#include "Automobile.h"
#include <iostream>

// Конструктор по-умолчанию
Automobile::Automobile()
{
	make = "";
	model = "";
	price = 0;
	maxSpeed = 0;
}

// Конструктор с параметрами
Automobile::Automobile(string make, string model, int price, int maxSpeed)
{
	this->make = make; // this обозначает, что мы имеем в виду те поля, которые объявлены внутри объекта.
	this->model = model;
	this->price = price;
	this->maxSpeed = maxSpeed;
}

void Automobile::DisplayInformation()
{
	cout << "Information about the car:" << endl;
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Price: " << price << endl;
	cout << "Max speed: " << maxSpeed << endl;
}