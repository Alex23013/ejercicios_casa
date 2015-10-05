#include <iostream>

 #include <cctype>

 using namespace std;

 int main() {

 	char messyString[] = "this.is.string";

	char current = messyString[0];

	for(int i = 0; current != '\0'; current = messyString[++i]) 
	{
		if(ispunct(current))

 		{
			 cout << ' ';
			if((islower(current)))
			{
				cout <<(char)toupper(current);
				//cout <<"is lo";
			}
		}

		else
		{
			cout <<(char)current;
		}
 		
 	}

 	cout << endl;

 	return 0;

 }
