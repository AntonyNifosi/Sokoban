#include "Case.h"

Case::Case(Point coordonnes)
{
  m_coordonees = coordonnes;
}

bool Case::PossCaisse()
{
  return m_possCaisse;
}

bool Case::PossPion()
{
  return m_possPion;
}