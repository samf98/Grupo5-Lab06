#include "Entrenador.h"
#include <sstream>

using std::stringstream;

Entrenador::Entrenador(string pNombre, string pApellido, string pSobrenombre, int pNivel, string pTactica):Persona(string pNombre, string pApellido, string pSobrenombre, int pNivel){

	tactica = pTactica;
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
