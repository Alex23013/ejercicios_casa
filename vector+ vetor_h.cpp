//////////vector.h /////////////////

class Point {
public:
	double x, y;

void offset(double offsetX, double offsetY) {
	x += offsetX;
	y += offsetY;
}

void print() 
{
		
	cout << "(" << x << "," << y << ")";
}

};

class Vector {
public:
	Point start, end;

void offset(double offsetX, double offsetY);
void print();
};

////////// vector.cpp ////////////


#include "vector.h"

void Point::offset(double offsetX, double offsetY) 
{
	x += offsetX; y += offsetY;
}

void Point::print()
{
	cout << "(" << x << "," << y << ")";
}

void Vector::offset(double offsetX, double offsetY) 
{
	start.offset(offsetX, offsetY);
	end.offset(offsetX, offsetY);
}

void Vector::print() {
	start.print();
	cout << " -> ";
	end.print();
	cout << endl;
}		


int main(){
	vector vec;
	vec.offset(3.4,4.5);
	vec.print();
}
