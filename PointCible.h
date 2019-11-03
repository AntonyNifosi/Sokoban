#pragma once

#ifndef _POINT_CIBLE_H
#define _POINT_CIBLE_H

#include "Case.h"

class PointCible : public Case
{
private :
	Point m_coordonnes;

public :
	PointCible(Point coordonnes);
	int NatureCase();
};

#endif