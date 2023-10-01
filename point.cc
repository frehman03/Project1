#include "point.h"
#include <iostream>

		Point::Point()
		{
			x = Fraction();
			y = Fraction();
		}
		Point::Point(Fraction xcoordinate, Fraction ycoordinate)
		{
			x = xcoordinate;
			y = ycoordinate;
		}

		Point::Point operator+(Point)
		{
			Fraction x, y;
			x = x + point.x;
			y = y + point.y;
			return Point(x, y); 
		}

 		Point operator-(Point rhs)
		{
			Fraction x, y;
			x = x - point.x;
			y = y - point.y;
			return Point(x, y);
		}

 		Point operator*(Fraction rhs)
		{
			Fraction x, y;
			x = x * fraction;
			y = y * fraction;
			return Point(x, y);
		}

 		Fraction operator*(Point rhs)
		{
			Fraction cross;
			cross = (( x * point.y)-(y * point.x));
			return cross;
		}

 		Point operator/(Point rhs)
		{
			Fraction x,y;
			x = x / point.x;
			y = y / point.y;
			return Point(x, y);
		}

 		Point operator=(Point rhs);
		{
			x = point.x;
			y = point.y;
			return Point(x,y);
		}
 		
		Fraction getx() {return x; }
		Fraction gety() {return y; }

		std::istream &operator>>(std::istream &ins, Point)
		{
			ins >> point.x >> point.y;
			return ins;
		}
		std::ostream &operator<<(std::ostream& out, Point)
		{
			out << "(" << point.x << "," << point.y << ")";
			return out;
		}
