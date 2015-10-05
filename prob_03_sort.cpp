#include <iostream>
#include <algorithm>

using namespace std;

const int n=20;

void print_arr(	int *pm)
{
	for (int i = 0; i < n; i++)
        {
        	cout << *(pm + i) << " ";
		}
	cout <<endl;
}

void swap( int * e1, int *  e2 )
{
   int temp = *e1;
   *e1 = *e2;
   *e2 = temp;
}

void orden( int *matriz,  int n )
{
   for ( int i = 0; i < n - 1; i++ )
   {
      for ( int j = 0; j < n - 1; j++ )
      {
         if ( matriz[ j ] > matriz[ j + 1 ] )
         {
            swap( &matriz[ j ], &matriz[ j + 1 ] );
         }
      }
   }
} 

int main()
{
    //int intArray[SIZE] = {5, 3, 32, -1, 1, 104, 53};
	int *pm;
	int *am;
 
    pm =am= new int [n];
     for (int i = 0; i < n; i++) 
	 	{
           *(pm + i) = *(am + i)  rand() % 100; 
        
             //cout << *(pm + i) << " " ;
    	}
    print_arr(pm);
    orden(am,n);
    sort(pm,pm+n);//intArray, intArray + SIZE);
    cout << "Sorted Array: " << endl;
  	print_arr(pm);
    return 0;
}
