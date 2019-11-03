#ifndef _CASE_CLASSIQUE_H
#define _CASE_CLASSIQUE_H

#include "Case.h"

class CaseClassique : public Case
{
private:
  Point m_coordonees;
  
public:
  CaseClassique(Point coordonnes);
  int NatureCase();
};

#endif