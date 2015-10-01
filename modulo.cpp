#include <iostream>
#include<math.h>
using namespace std;

class Point
{
public:
	double x;
	double y;
};

class Vector
{
public:
	Point start;
	Point end;	
};

float mod (Vector vec1)
{
	float modulo;
	modulo = sqrt(pow((vec1.end.x - vec1.start.x),2) + pow((vec1.end.y - vec1.start.y),2));
	cout << "el modulo del vector es " << modulo <<endl;
}
int main()
{
	Vector vec1;
	vec1.start.x=3.0;
	vec1.start.y=7.0;
	vec1.end.x=5.0;
	vec1.end.y=7.0;	
	mod(vec1);
}
