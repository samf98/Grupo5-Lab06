#include "Entrenador.h"
#include <sstream>

using std::stringstream;

Entrenador::Entrenador(string pNombre, string pApellido, string pSobrenombre, int pNivel, string pTactica):Persona(pNombre, pApellido, pSobrenombre, pNivel){

	tactica = pTactica;
}
Entrenador::Entrenador() {

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
	cout << Persona::toString() << "Tactica preferida: " << tactica << endl;
}
