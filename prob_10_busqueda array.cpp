#include <iostream>
#include <cstdlib> 
using namespace std;
int n=400000;

void buscar (int *pm,int w )
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
    int *pm;
 
    pm = new int [n];
     for (int i = 0; i < n; i++) 
	 	{
           *(pm + i) = rand() % 100; 
           //cout << *(pm + i) << " " ;
    	}
    int a ;
    cout << endl <<"valor buscado: " << endl;
    cin >> a;
    cout << "encontramos el " << a << " en: " << endl; 
    buscar (pm,a);
}
