//1. Calcular el �rea y el per�metro de un rect�ngulo: 
//Elabore un algoritmo en C++ para calcular el �rea y el per�metro de un rect�ngulo 
//solicitando los datos necesarios al usuario.
#include <iostream>
using namespace std;

int main(){
	float area, perimetro, base, altura;
	cout<<"A continuaci�n ingrese los datos para calcular el area y el perimetro"<<endl;
	cout<<"Ingrese la Base:";
	cin>>base;
	cout<<"Ingrese la Altura:";
	cin>>altura;
	
	area= base*altura;
	perimetro=(base*2)+(altura*2);
	
	cout<<"Con los datos ingresados su rectangulo tiene "<<area<<" de area y "<<perimetro<<" de perimetro.";
	
	
	
}

