#pragma once

#include "Persona.h"

class Jugador: public Persona
{
	private:
		string posicion;
	public:
		Jugador(string,string,string,int,string);
		~Jugador();
		void setPosicion(string);
		string getPosicion();
		string toString();
};