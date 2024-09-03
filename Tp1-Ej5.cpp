//Calcular el área y el perímetro de una circunferencia: 
//Elabore un algoritmo en C++ para calcular el área y el perímetro de una 
//circunferencia. Se debe solicitar al usuario el dato del radio y se debe definir la 
//constante PI=3.141592. 

#include <iostream>
using namespace std;
#define PI 3.141592

int main(){
	double area, perimetro, radio;
	cout<<"Para calcular el area y perimetro de su circunferencia ingrese el radio:";
	cin>>radio;
	area=PI*radio*radio;
	perimetro=2*PI*radio;
	
	cout<<"Su circunferencia tiene un area de "<<area<<" U cuadrados y un perimetro de "<<perimetro<<" U.";
	
}
