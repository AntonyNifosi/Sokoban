#include "Compteur.h"

Compteur::Compteur()
{
  m_nbCoup = 0;
}

void Compteur::decrementerNbCoup()
{
    m_nbCoup--;
}

void Compteur::incrementerNbCoup()
{
  m_nbCoup++;
}

void Compteur::start() 
{
  m_nbCoup = 0;
}

int Compteur::stop()
{
  return m_nbCoup;
}