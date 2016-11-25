#include "Persona.h"
#include <sstream>

using std::stringstream;

Persona::Persona(string pNombre, string pApellido, string pSobrenombre, int nivel){
}

void Persona::setNombre(string pNombre){
	nombre = pNombre;
}

string Persona::getNombre(){
	return nombre;
}

void Persona::setApellido(string pApellido){
	apellido = pApellido;
}

string Persona::getApellido(){
	return apellido;
}

void Persona::setSobrenombre(string pSobrenombre){
	sobrenombre = pSobrenombre;
}

string Persona::getSobrenombre(){
	return sobrenombre;
}

int Persona::getNivel(){ return nivel;}


Persona::~Persona(){

}

void Persona::toString(){
	stringstream ss;
	ss << "Nombre: " << pNombre << endl << "Apellido: " << pApellido << endl << "Sobrenombre: " << pSobrenombre << endl << "Nivel: " << nivel << endl;
	cout << ss;
}



