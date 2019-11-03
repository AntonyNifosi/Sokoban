#include "PointCible.h"

PointCible::PointCible(Point coordonnes) : Case(coordonnes)
{

}

int PointCible::NatureCase()
{
	return 2;
}

