#include "Partido.h"
#include <sstream>

using std::stringstream;

Partido::Partido(){
	pPuntos_e1 = pPuntos_e2 = 0;
}

int Partido::Puntos_e1(){return pPuntos_e1;}

int Partido::Puntos_e2(){return pPuntos_e2;}

Partido::~Partido(){

}

void Partido::toString(){
	stringstream ss;
	ss << "Nombre Equipo 1: "

}
