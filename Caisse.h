#ifndef _CAISSE_H
#define _CAISSE_H

#include "Point.h"

class Caisse
{
private:
  Point m_coordonees;
  
public:
  Caisse();
  Caisse(Point coordonees);
};

#endif