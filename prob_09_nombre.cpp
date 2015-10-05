#include <iostream>
#include <cstdlib> 
using namespace std;
int n=20;

void buscar (char *pm,char w )
{
	 for (int i = 0; i < n; i++)
	    {
       	 if(*(pm + i) == w )
			{
				cout << "casilla: "<< i <<endl;
			}
		
		}
	
}

int main()
{
    char *pm;
 
    pm = new char [n];
     for (int i = 0; i < n; i++) 
	{
           cin >>*(pm + i) ; 
           //cout << *(pm + i) << " " ;
    	}
    char a ;
    cout << endl <<"valor buscado: " << endl;
    cin >> a;
    cout << "encontramos el " << a << " en: " << endl; 
    buscar (pm,a);
}
