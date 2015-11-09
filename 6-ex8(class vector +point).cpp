#include <iostream>
using namespace std;

class Point {
public:
	double x, y;

void offset(double offsetX, double offsetY) {
	x += offsetX;
	y += offsetY;
}

void print() {
cout << "(" << x << "," << y << ")";
}

};

class Vector {
public:
	Point start, end;

void offset(double offsetX, double offsetY) {
	start.offset(offsetX, offsetY);
	end.offset(offsetX, offsetY);
}

void print() {
	start.print();
	cout << " -> ";
	end.print();
	cout << endl;
}

};
