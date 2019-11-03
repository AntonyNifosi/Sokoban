#include "Mur.h"

Mur::Mur(Point coordonnes) : Case(coordonnes)
{

}

int Mur::NatureCase()
{
	return 1;
}