#include <iostream>
#include "Automobile.h"

using namespace std;

void main()
{
	Automobile carFordMustang = Automobile("Ford", "Mustang", 25000, 240); // Создаём объект машины через конструктор с параметрами
	Automobile carChevroletCamaro = Automobile("Chevrolet", "Camaro", 30000, 260);
	Automobile carDodgeChallenger = Automobile("Dodge", "Challenger", 40000, 300);

	carFordMustang.DisplayInformation();

	cout << endl;

	carChevroletCamaro.DisplayInformation();

	cout << endl;

	carDodgeChallenger.DisplayInformation();
}