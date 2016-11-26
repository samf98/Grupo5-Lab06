#include "Equipo.h"
#include <sstream>

using std::stringstream;

Equipo::Equipo()
{
	
}

Equipo::Equipo(string pNombre){
	defensa = ofensa = golespro = golescon = 0;
}

void Equipo::setNombre(string pNombre){
	nombre = pNombre;
}

void Equipo::setEntrenador(Entrenador* pEntrenador)
{
	this->entrenador = pEntrenador;
}

string Equipo::getNombre(){
	return nombre;
}

double Equipo::getDefensa(){ return defensa;}

double Equipo::getOfensa(){return ofensa;}

int Equipo::getGolespro(){return golespro;}

int Equipo::getGolescon(){return golescon;}

Equipo::~Equipo(){

}

void Equipo::imprimirJugadores()
{
	string mensaje;
	for (int i = 0; i < 11; ++i)
	{
		jugadores[i].toString();
	}
}

void Equipo::toString(){
	stringstream ss;
	cout << "Nombre de Equipo: " << nombre << endl << "Nivel de defensa: " << defensa << endl << "Nivel de Ofensa: " << ofensa << endl << "Goles a favor: " << golespro << endl << "Goles en contra: " << golescon << endl;
	imprimirJugadores();
	entrenador->toString();
}

