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
		void setEquipo1(Equipo);
		void setEquipo2(Equipo);
		int getPuntos1();
		int getPuntos2();
		void setLocal();
		void setGanador();
		void toString();

}