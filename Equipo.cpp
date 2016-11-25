#include "Equipo.h"
#include <sstream>

using std::stringstream;

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

string Equipo::imprimirJugadores()
{
	string mensaje;
	for (int i = 0; i < 11; ++i)
	{
		mensaje+=jugadores[i].toString();
	}
	return mensaje;
}

void Equipo::toString(){
	stringstream ss;
	ss << "Nombre de Equipo: " << nombre << endl << "Nivel de defensa: " << defensa << endl << "Nivel de Ofensa: " << ofensa << endl << "Goles a favor: " << golespro << endl << "Goles en contra: " << golescon << endl
	<< imprimirJugadores() << endl << entrenador->toString() << endl;
	cout << ss;
}

