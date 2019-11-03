#pragma once

#ifndef _MUR_H
#define _MUR_H

#include "Case.h"

class Mur : public Case
{
private :
	Point m_coordonnes;

public:
	Mur(Point coordonnes);
	int NatureCase();
};


#endif