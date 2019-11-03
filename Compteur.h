#ifndef _COMPTEUR_H
#define _COMPTEUR_H



class Compteur
{
private:
  int m_nbCoup;
  
public:
  Compteur();
  void decrementerNbCoup();
  void incrementerNbCoup();
  void start();
  int stop();
};

#endif