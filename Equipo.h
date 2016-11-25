#pragma once

#include <iostream>
#include <string>

class Equipo
{
	private:
		string nombre;
		Entrenador entrenador;
		Jugador* jugadores;
		double defensa;
		double ofensa;
		int golespro;
		int golescon;

	public:
		Equipo(string,string);
		~Equipo();
		Jugador* getJugadores();
		void setJugadores(Jugador*);
		void calcularDefensa();
		void calcularOfensa();
		int getGolespro();
		void setGolespro(int);
		int getGolescon();
		void setGolescon();
		void toString();

}