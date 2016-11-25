#include "Persona.h"
#include <sstream>

Entrenador::Entrenador(string pTactica){

}

void Entrenador::setTactica(string pTactica){
	tactica = pTactica;
}

string Entrenador::getTactica(){
	return tactica;
}

Entrenador::~Entrenador(){
}

void Entrenador::toString(){
	stringstream ss;
	ss << Persona::toString() << "Tactica preferida: " << preferida << endl;
	cout << ss;
}
