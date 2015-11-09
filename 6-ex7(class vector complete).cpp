#include <iostream>
using namespace std;

class Vector {
public:
	Point start;
	Point end;

void offset(double offsetX, double offsetY) {
	start.x += offsetX;
	end.x += offsetX;
	start.y += offsetY;
	end.y += offsetY;
}

void print() {
	cout << "(" << start.x << "," << start.y << ") -> (" << end.x <<"," << end.y << ")" << endl;
}

};
