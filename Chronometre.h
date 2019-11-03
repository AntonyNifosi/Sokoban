#pragma once

#ifndef _CHRONOMETRE_H
#define _CHRONOMETRE_H

#include <ctime>

class Chronometre
{
private:
	time_t m_temps;

public:
	Chronometre();
	void start();
	time_t stop();
};

#endif