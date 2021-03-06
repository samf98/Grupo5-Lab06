#include "Persona.h"
#include <sstream>

using std::stringstream;

Persona::Persona(string pNombre, string pApellido, string pSobrenombre, int pNivel){
	nombre = pNombre;
	apellido = pApellido;
	sobrenombre = pSobrenombre;
	nivel = pNivel;
}

Persona::~Persona()
{
	
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

string Persona::toString(){
	stringstream ss;
	ss << "Nombre: " << nombre << endl << "Apellido: " << apellido << endl << "Sobrenombre: " << sobrenombre << endl << "Nivel: " << nivel << endl;
	cout << ss;
	return ss.str();
}



