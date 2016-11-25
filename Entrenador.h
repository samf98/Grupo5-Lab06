#pragma once

#include "Persona.h"
#include <string>

using std::string;

class Entrenador : public Persona
{
	private:
		string tactica;
	public:
		Entrenador();
		Entrenador(string,string,string,int,string);
		~Entrenador();
		void setTactica(string);
		string getTactica();
		string toString();
};