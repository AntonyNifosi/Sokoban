#include "Niveau.h"

Niveau::Niveau()
{

}

void Niveau::InitialiserPlateau(std::string nomFichier)
{
	std::ifstream file(nomFichier, std::ios::in);  // on ouvre

	if (file)
	{
		while (!file.eof())
		{
			std::cout << (char)file.get();
		}
	}
	else
	{
		throw std::string("Impossible d'ouvrir le fichier");
	}


}