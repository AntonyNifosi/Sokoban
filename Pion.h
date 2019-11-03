#ifndef _PION_H
#define _PION_H

#include "Point.h"

class Pion
{
private:
  Point m_coordonees;
  
public:
  Pion();
  Pion(Point coordonees);
};

#endif