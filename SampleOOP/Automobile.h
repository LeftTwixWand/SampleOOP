#pragma once
#include <string>

using namespace std;

class Automobile
{
public:
	string make;
	string model;
	int price;
	int maxSpeed;

	Automobile(); // Конструктор по-умолчанию
	Automobile(string make, string model, int price, int maxSpeed); // Конструктор с параметрами
	void DisplayInformation();
};