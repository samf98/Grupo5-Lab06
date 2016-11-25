#include <iostream>
#include <vector>
#include "Persona.h"
#include "Entrenador.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Partido.h"

int main()
{
	vector<Jugador*> jugadores = NULL;
	vector<Entrenador*> entrendaroes = NULL;
	vector<Equipo*> equipos = NULL;
	vector<Equipo*> equipos_torneo = NULL;
	int operacion=0;
	do
	{
		cout<<"1-Crear Equipo"<<endl<<"2-Crear Jugador"<<endl<<"3-Crear Entrenador"<<endl<<"4-Comenzar Simulación";
		cin>>operacion;
		switch(operacion)
		{
			case 1:
			{
				if(jugadores.size()>=10&&entrenadores.size()>=1)
				{
					Jugador* jugadores_equipo = new Jugador[11];

					int cont=0;
					int jugador_escogido=0;
					for (int i = 0; i < 11; ++i)
					{
						cout<<"Escoja el jugador "<<endl;
						cin>>jugador_escogido;
						if(jugador_escogido>-1&&jugador_escogido<jugadores.size())
						{
							jugadores_equipo[cont] = jugadores.at(jugador_escogido);
							jugadores.erase(jugador_escogido);
						}
						else
							i--;
					}

					int validacion = 0;
					Entrenador* entrenador_equipo;
					int entrenador_escogido=0;
					while(validacion = 0)
					{
						cout<<"Escoja un entrenador: ";
						cin>>entrenador_escogido;
						if(entrenador_escogido>=0&&entrenador_escogido<entrenadores.size())
						{
							entrenador_equipo = entrenadores.at(entrenador_escogido);
							entrenadores.erase(entrenador_escogido);
							validacion = 1;
						}
						else
							cout<<"No escogió un entrenador.";
					}
				}
				else
					cout<<"No hay suficientes jugadores y/o entrenadores."<<endl;
				break;
			}

			case 2:
			{
				Jugador* jugador = NULL;
				string nombre = "";
				string apellido = "";
				string sobrenombre = "";
				int nivel = 0;
				string posicion = "";
				cout<<"Ingrese nombre: ";
				cin>>nombre;
				cout<<"Ingrese apellido: ";
				cin>>apellido;
				cout<<"Ingrese sobrenombre: ";
				cin>>sobrenombre;
				cout<<"Ingrese nivel(1-10): ";
				cin>>nivel;
				cout<<"Ingrese la posición: ";
				cin>>posicion;

				if(nivel<11&&nivel>0)
				{
					jugador = new Jugador(nombre.apellido,sobrenombre,nivel,posicion);
					jugadores.push_back(jugador);
				}
				else
					cout<<"Nivel no válido."<<endl;
				break;
			}

			case 3:
			{
				Entrenador* entrenador = NULL;
				string nombre = "";
				string apellido = "";
				string sobrenombre = "";
				int nivel = 0;
				string tactica = "";
				cout<<"Ingrese nombre: ";
				cin>>nombre;
				cout<<"Ingrese apellido: ";
				cin>>apellido;
				cout<<"Ingrese sobrenombre: ";
				cin>>sobrenombre;
				cout<<"Ingrese nivel(1-10): ";
				cin>>nivel;
				cout<<"Ingrese la táctica: ";
				cin>>tactica;

				if(nivel<11&&nivel>0)
				{
					entrenador = new Entrenador(nombre.apellido,sobrenombre,nivel,entrenador);
					entrenadores.push_back(entrenador);
				}
				else
					cout<<"Nivel no válido."<<endl;
				break;
			}

			case 4:
			{

				break;
			}

			case 5:
			{

				break;
			}
		}
		cout<<"Salir?[0=No||1=Si]"<<endl;
		cin>>operacion;
	}while(operacion==0);

}