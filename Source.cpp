#include <iostream>
#include <thread>
#include <chrono>
#include "Point.h"
#include "Chronometre.h"
#include "Niveau.h"

int main()
{
	Point p(10, 10);
	Point p1;
	Niveau level;
	p1 = p;
	p1.afficher();
	level.InitialiserPlateau("level1.txt");

	

	system("pause");
	return 0;
}