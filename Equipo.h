#pragma once

#include "Persona.h"
#include "Jugador.h"
#include "Entrenador.h"
#include <iostream>
#include <string>

using namespace std;

class Equipo
{
	private:
		string nombre;
		Entrenador* entrenador;
		Jugador* jugadores;
		double defensa;
		double ofensa;
		int golespro;
		int golescon;

	public:
		Equipo(string);
		~Equipo();
		void setEntrenador(Entrenador*);
		Entrenador* getEntrenador();
		Jugador* getJugadores();
		void setJugadores(Jugador*);
		void calcularDefensa();
		void setNombre(string);
		string getNombre();
		double getDefensa();
		double getOfensa();
		void calcularOfensa();
		int getGolespro();
		void setGolespro(int);
		int getGolescon();
		void setGolescon();
		void toString();
		string imprimirJugadores();

};