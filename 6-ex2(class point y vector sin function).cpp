#include <iostream>
using namespace std;

class Point {
public:
	double x;
	double y;
};

class Vector {
public:
	Point start;
	Point end;
};

int main() {
	Vector vec1;
	vec1.start.x = 3.0;
	vec1.start.y=4.0;
	vec1.end.x =5.0;
	vec1.end.y =6.0;
	Vector vec2;
	vec2.start = vec1.start;
	vec2.start.x=7.0;
}
