#include<iostream>
#include<conio.h>

using namespace std;
//declaramos variables asi bien bonitas



int main(){
	
	int numeros[4][4], a, b, c, d;
	int suma;
	int resultado;
	
	
	//ingresamos los valores :D
	cout<<"Ingresa los numeros de las filas: " <<endl;
	cin>>a;
	cin>>b;
	cout<<"Ingresa los numeros de la columnas: "<<endl;
	cin>>c;
	cin>>d;
	
	cout<<a; cout<<b<<endl;
	cout<<c; cout<<d<<endl;
	
	
	
	
	//se elabora la suma
{
		suma=a+b+c+d;
	}
	cout<<"La suma es de: "<<suma;
	
	//elaboramos si es par o impar
if(suma % 2 == 0)
       cout << endl << suma <<" es par\n";
    else
       cout << endl << suma <<" es impar\n";
}
	
	
	
	
	
	
	
	
	
	

