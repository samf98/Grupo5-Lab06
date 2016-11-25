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
		Persona();
		Persona(string,string,string,int);
		virtual ~Persona();
		void setNombre(string);
		string getNombre();
		void setApellido(string);
		string getApellido();
		void setSobrenombre(string);
		string getSobrenombre();
		int getNivel();
		void setNivel(int);
		virtual string toString();
};