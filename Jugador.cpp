#include "Jugador.h"
#include "Persona.h"

Jugador::Jugador()
{

}

Jugador::Jugador(string pNombre, string pApellido, string pSobrenombre, int pNivel, string pPosicion):Persona(pNombre, pApellido, pSobrenombre, pNivel)
{

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
	cout << Persona::toString() << "Posicion del jugador: " << posicion << endl;
}



