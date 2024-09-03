//Calcular el área y el perímetro de un triángulo equilátero: 
//Elabore un algoritmo en C++ para calcular el área y el perímetro de un triángulo 
//equilátero solicitando los datos necesarios al usuario.

#include <iostream>
using namespace std;

int main(){
	float lados, area, altura, perimetro;
	cout<<"Debe ingresar la medida de los lados de su Triangulo equilatero:";
	cin>>lados;
	cout<<"Ingrese la altura del triangulo:";
	cin>>altura;
	
	area=lados*altura;
	perimetro=lados*3;
	
	cout<<"Su triangulo equilatero tiene un area de "<<area<<" U cuadrados y un perimetro de "<<perimetro<<" U.";
	
	
}
