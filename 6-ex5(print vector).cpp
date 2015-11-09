#include <iostream>
using namespace std;


class Point {
public: 
	double x, y;
};

class Vector {
public: 
	Point start, end;
};

void printVector(Vector v) {
	cout << "(" << v.start.x << "," << v.start.y << ") -> (" << v.end.x <<"," << v.end.y << ")" << endl;
}

int main() {
	Vector vec;
	vec.start.x = 1.2;
	vec.end.x = 2.0; 
	vec.start.y = 0.4;
	vec.end.y = 1.6;
	printVector(vec); // (1.2,0.4) -> (2.0,1.6)
}
