#include "Partido.h"
#include <sstream>

using std::stringstream;

Partido::Partido(Equipo e1, Equipo e2){
	puntos_e1 = 0;
	puntos_e2 = 0;
}

int Partido::getPuntos1(){return puntos_e1;}

int Partido::getPuntos2(){return puntos_e2;}

Partido::~Partido(){

}

void Partido::toString(){
	stringstream ss;
	ss << "Nombre Equipo 1: ";

}
