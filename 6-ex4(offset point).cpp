#include <iostream>
using namespace std;


class Point { 
public: 
	double x, y; 
};

void offsetPoint(Point &p, double x, double y) { 
	p.x += x;
	p.y += y;
}


int main() {
	Point p;
	p.x = 3.0;
	p.y = 4.0;
	offsetPoint(p, 1.0, 2.0); 
	cout << "(" << p.x << "," << p.y << ")"; 
}
