#include "Persona.h"
#include <sstream>

Jugador::Jugador(string){
}

void Jugador::setPosicion(string pPosicion){
	posicion = pPosicion;
}

string Jugador::getPosicion(){
	return posicion;
}

Jugador::~Jugador(){
}

void Jugador::toString(){
	stringstream ss;
	ss << Persona::toString() << "Posicion del jugador: " << pPosicion << endl;
	cout << ss;
}

