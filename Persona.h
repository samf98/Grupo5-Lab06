#pragma once

#include <iostream>
#include <string>

using namespace std;

class Persona
{
	private:
		string nombre;
		string apellido;
		string sobrenombre;
		int nivel;
	public:
		Persona(string,string,string,int);
		~Persona();
		void setNombre(string);
		string getNombre();
		void setApellido(string);
		string getApellido();
		void setSobrenombre(string);
		string getSobrenombre();
		int getNivel();
		void setNivel(int);
		void toString();
};