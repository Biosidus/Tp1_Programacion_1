//3. Convertir Pesos Argentinos a Reales Brasileros 
//Elabore un algoritmo en C++ para convertir pesos argentinos a d�lares 
//estadounidenses. La cantidad de pesos y la cotizaci�n deber�n ser solicitadas al 
//usuario. 

#include <iostream>
using namespace std;

int main(){
	float cotizacion, cantidad_pesos, total;
	cout<<"A continuacion deber ingresar la cantidad de pesos a convertir:";
	cin>>cantidad_pesos;
	cout<<"Ingrese la contizacion de la conversion:";
	cin>>cotizacion;
	
	total=cantidad_pesos/cotizacion;
	
	cout<<"La conversion de sus $"<<cantidad_pesos<<" serian USD$"<<total<<".";
	
}
