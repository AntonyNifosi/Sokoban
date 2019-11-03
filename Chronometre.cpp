#include "Chronometre.h"

Chronometre::Chronometre()
{

}

void Chronometre::start()
{
	m_temps = time(NULL);
}

time_t Chronometre::stop()
{
	return difftime(time(NULL), m_temps);
}