#include <iostream>
 #include <cstring>
 #include <string.h> 
 using namespace std;

void que()
{
	 cout << "Que desea hacer: " << endl;
	 cout << "1: copiar el contenido a otra cadena"<<endl;
	 cout << "2: concatenar dos cadenas" <<endl;
	 cout << "3: devolver la longitud" <<endl;
	 cout << "4: comparar si son iguales las cadenas" <<endl;
	 cout << "0: salir " <<endl;
	cout <<endl;
}


 int main() {

 char fragment1[] = "asdas";
 char fragment2[] = "werwe";
 char fragment3[20];
 cout << "tenemos los fragmentos : " <<endl;
 cout << fragment1<<endl;
 cout << fragment2<<endl;
 cout << fragment3<<endl;
 char finalString[20] = "";
 int x =1;
 while(x!=0)
 {
 	que();
	 cin >> x;
 if(x==1)
 {
 	strcpy(fragment3, fragment1);
 	cout<< fragment3 <<endl;
 	cout <<endl;
 }
  
  if (x==2)
  {
  	strcat(finalString, fragment3);
  	strcat(finalString, fragment2);
  	cout << finalString <<endl;
  	cout <<endl;
  }
  if (x==3)
  {
  	int tam=strlen(fragment2);
  	cout << "la cadena mide  "<<tam <<endl;
  	cout <<endl;
  }
  if (x==4)
  {
  	for(int i; i<5;i++)
  	{
  	while(fragment1[i]!=fragment2[i])
  	{
  		cout << "son diferentes"<<endl;
  		break;
  	}
  		cout << "son iguales"<<endl;
  	}
  	cout <<endl;
  }
  
 }
 
 

 
 

 return 0;

}
