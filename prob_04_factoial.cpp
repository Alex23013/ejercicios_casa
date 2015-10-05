#include<iostream> 
using namespace std;


float factorial=1,n,i; 
int main() 
{ 
	int n;
	cout<<"factorial de que numero ? " <<endl; 
	cin>>n; 
	int factorial =1;
	for ( int i =2;i<n+1;i++)
	{
		factorial=factorial *i; 
		//cout << factorial <<endl;
	} 
	cout << "factorial de " << n << " es " << factorial << endl;
	
}
