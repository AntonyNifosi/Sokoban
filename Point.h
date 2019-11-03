#ifndef _POINT
#define _POINT

#include <math.h>
#include <string>
#include <iostream>   

using namespace std;

class Point{
	private:
		int m_x;
		int m_y;
		
	public:
	  Point();
		Point(int x, int y);
		int get_x();
		int get_y();
		void afficher();
		void deplacer(int dx, int dy);
		float distanceOrigine();
		float distancePoint(Point point);
		
		Point& operator=(const Point& point);
};

#endif
