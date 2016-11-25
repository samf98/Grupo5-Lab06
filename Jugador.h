#pragma once

#include "Persona.h"

class Jugador: Persona
{
	private:
		string posicion;
	public:
		Jugador(string,string,string,int,string);
		~Jugador();
		void setPosicion(string);
		string getPosicion();
		void toString();
};