#include "Persona.h"
#include <sstream>

using std::stringstream;

Jugador::Jugador(string pPosicion){
}

void Jugador::setPosicion(string pPosicion){
	posicion = pPosicion;
}

string Jugador::getPosicion(){
	return posicion;
}

Jugador::~Jugador(){

}

string Jugador::toString(){
	stringstream ss;
	ss << Persona::toString() << "Posicion del jugador: " << pPosicion << endl;
	cout << ss;
}



