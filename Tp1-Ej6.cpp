//Calcular la distancia a la que se encuentra una tormenta: 
//Elabore un algoritmo en C++ para calcular la distancia en metros a la que se 
//encuentra una tormenta cronometrando los segundos transcurridos entre el 
//relámpago y el trueno. Se debe tomar como constante la velocidad del sonido en 
//343 metros por segundo. 

#include <iostream>
using namespace std;


int main(){
	const double velocidadSonido = 343.0;
	double segundos, distancia;
	
	cout<<"Ingrese el tiempo(en segundos) entre el relampago y el trueno:";
	cin>>segundos;
	
	distancia = velocidadSonido*segundos;
	
	cout<<"La tormenta se encuentra a aproximadamente "<<distancia<<" metros de distancia.";
	
}

