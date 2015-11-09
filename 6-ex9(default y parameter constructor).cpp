#include <iostream>
using namespace std;

class Point {
public:
	double x, y;

Point() {
	x = 0.0; y = 0.0; cout << "default constructor" << endl;
}

Point(double nx, double ny) {
	x = nx; y = ny; cout << "2-parameter constructor" << endl;
}
};

int main() {
Point p; // default constructor
// p.x is 0.0, p.y is 0.0)
Point q(2.0, 3.0); // 2-parameter constructor
// q.x is 2.0, q.y is 3.0)
}
