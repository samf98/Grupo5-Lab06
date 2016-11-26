#pragma once

#include "Persona.h"
#include <string>

using std::string;

class Entrenador : Persona
{
	private:
		string tactica;
	public:
		Entrenador();
		Entrenador(string,string,string,int,string);
		~Entrenador();
		void setTactica(string);
		string getTactica();
		void toString();
};