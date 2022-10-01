#include<iostream>
using namespace std;
//CREADO Mayerli Aria Tenorio
int main() 
{
	float m,a;
	cout<<"ingrese su primer numero que desea comparar:   ";
	cin>> m;
	cout<<"ingrese su  segundo numero que desesa comparar:  ";
	cin>> a;
	if(m==a)
	{
		cout<<" primer numero es mayor:  ";
	}
	
	else if(m>a)
	{
		cout<<"son iguales:  ";
	}
	else if(m<a)
	{  
		cout<<" segundo nuemro es mayor:  ";
	}
	return(0);
}
