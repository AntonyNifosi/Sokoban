#include "Point.h"

Point::Point() {
  m_x = 0;
  m_y = 0;
}

Point::Point(int x, int y) {
	m_x = x;
	m_y = y;
}

int Point::get_x() {
	return m_x;
}

int Point::get_y() {
	return m_y;
}

void Point::afficher() {
	cout << m_x << ", " << m_y << endl;
}

void Point::deplacer(int dx, int dy) {
	m_x += dx;
	m_y += dy;
}

float Point::distanceOrigine(){
	return sqrt(m_x * m_x + m_y * m_y);
}

float Point::distancePoint(Point point){
	return sqrt(pow(point.get_x() - m_x, 2) + pow(point.get_y() - m_y, 2));
}

Point& Point::operator=(const Point& point)
{
  m_x = point.m_x;
  m_y = point.m_y;
  return *this;
}

