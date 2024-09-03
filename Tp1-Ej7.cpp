//Imprimir datos personales: 
//Elabore un algoritmo en C++ para imprimir los datos personales del usuario. Se 
//deben solicitar los datos de Nombres, Apellido, Edad, Dirección, Localidad, 
//Provincia, País y Teléfono.

#include <iostream>
#include <string>
using namespace std;

int main(){
	string nombres, apellido, direccion, localidad, provincia, pais;
	int telefono, edad;
	
	cout<<"A continuacion debe ingresar su Nombre y Apellido"<<endl;
	cin>>nombres>>apellido;
	cout<<"Direccion, Localidad, Provincia y Pais:"<<endl;
	cin>>direccion>>localidad>>provincia>>pais;
	cout<<"Edad:";
	cin>>edad;
	cout<<"Telefono:";
	cin>>telefono;
	
	cout<<"Sus datos son:"<<endl;
	cout<<nombres<<", "<<apellido<<"."<<endl;
	cout<<"Vive en: "<<direccion<<", "<<localidad<<", "<<provincia<<", "<<pais<<"."<<endl;
	cout<<"Tiene "<<edad<<" años."<<endl;
	cout<<"Y su telefono es +54 "<<telefono;
	
	
	
}
