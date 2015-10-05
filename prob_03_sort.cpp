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

int main()
{
    //int intArray[SIZE] = {5, 3, 32, -1, 1, 104, 53};
	int *pm;
 
    pm = new int [n];
     for (int i = 0; i < n; i++) 
	 	{
           *(pm + i) = rand() % 100; 
           //cout << *(pm + i) << " " ;
    	}
    print_arr(pm);
    sort(pm,pm+n);//intArray, intArray + SIZE);
    cout << "Sorted Array: " << endl;
  	print_arr(pm);
    return 0;
}
