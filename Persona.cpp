#include "Persona.h"

Persona::Persona(){
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

int Persona::getNivel(){return nivel;}

Persona::~Persona(){

}



