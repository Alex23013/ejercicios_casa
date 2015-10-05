#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

struct ToUpper {

	char operator () ( char c ) { return (char) ( ( int ) c ) - 32; } 
};

int main()
{
	string str;
	cin >> str;
	transform( str.begin(), str.end(), str.begin(), ToUpper() );
	cout << str << endl;

	cin.get();
	cout << endl;
	cin.get();

	return 0;
}
