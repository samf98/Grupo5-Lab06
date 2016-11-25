#pragma once
#include <iostream>

clase Partido
{
	private:
		Equipo equipo1;
		Equipo equipo2;
		int puntos_e1;
		int puntos_e2;
		Equipo ganador;
		Equipo local;

	public:
		Equipo();
		~Equipo();
		
		void setLocal();
		void setGanador();
		void toString();

}