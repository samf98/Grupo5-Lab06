#include "Persona.h"
#include <sstream>

using std::stringstream;

Entrenador::Entrenador() {

}

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

string Entrenador::toString(){
	stringstream ss;
	ss << Persona::toString() << "Tactica preferida: " << preferida << endl;
	cout << ss;
}
