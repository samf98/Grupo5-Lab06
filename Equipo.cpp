#include "Equipo.h"
#include <sstream>

Equipo::Equipo(string pNombre){
	pDefensa = pOfensa = pGolespro = pGolescon = 0;
}

void Equipo::setNombre(string pNombre){
	nombre = pNombre;
}

string Equipo::getNombre(){
	return nombre;
}

double Equipo::getDefensa(){ return pDefensa;}

double Equipo::getOfensa(){return pOfensa;}

int Equipo::Golespro(){return pGolespro;}

int Equipo::Golescon(){return pGolescon;}

Equipo::~Equipo(){

}

void Equipo::toString(){
	stringstream ss;
	ss << "Nombre de Equipo: " << pNombre << endl << "Nivel de defensa: " << pDefensa << endl << "Nivel de Ofensa: " << pOfensa << endl << "Goles a favor: " << pGolespro << endl << "Goles en contra: " << pGolescon << endl;
	cout << ss;
}