#pragma once

#include <iostream>
#include <string>

class Persona
{
	private:
		string nombre;
		string apellido;
		string sobrenombre;
		int nivel;
	public:
		Persona();
		~Persona();
		void setNombre(string);
		string getNombre();
		void setApellido(string);
		string getApellido();
		void setSobrenombre(string);
		string getSobrenombre();
		int getNivel();
		void setNivel(int);
}