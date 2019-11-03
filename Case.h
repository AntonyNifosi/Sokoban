#ifndef _CASE_H
#define _CASE_H

#include "Point.h"

class Case
{
private:
  Point m_coordonees;
  bool m_possCaisse;
  bool m_possPion;
  
public:
  Case(Point coordonnes);
  virtual int NatureCase() = 0;
  bool PossCaisse();
  bool PossPion();
};

#endif