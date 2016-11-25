#pragma once

#include "Persona.h"

class Entrenador: Persona
{
	private:
		string tactica;
	public:
		Entrenador(string,string,string,int,string);
		~Entrenador();
		void setTactica(string);
		string getTactica();
		void toString();
}