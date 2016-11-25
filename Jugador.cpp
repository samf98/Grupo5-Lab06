#include "Jugador.h"
#include "Persona.h"
#include <sstream>

using std::stringstream;

Jugador::Jugador()
{

}

Jugador::Jugador(string pNombre, string pApellido, string pSobrenombre, int pNivel, string pPosicion):Persona(string pNombre, string pApellido, string pSobrenombre, int pNivel){
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
	ss << Persona::toString() << "Posicion del jugador: " << posicion << endl;
	return ss.str;
}



