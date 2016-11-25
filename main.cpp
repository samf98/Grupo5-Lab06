#include <iostream>
#include <vector>
#include "Persona.h"
#include "Entrenador.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Partido.h"

int main()
{
	vector<Equipo*> equipos = NULL;

	int operacion=0;
	do
	{
		cout<<"1-Crear Equipo"<<endl<<"2-Comenzar Simulación";
		cin>>operacion;
		switch(operacion)
		{
			case 1:
			{
				string nombre;
				string apellido;
				string sobrenombre;
				int nivel;
				string extra;
				cout<<"Datos de entrenador: "<<endl;
				cout<<"Nombre: ";
				cin>>nombre;
				cout<<"Apellido: ";
				cin>>apellido;
				cout<<"Sobrenombre: ";
				cin>>sobrenombre;
				cout<<"Nivel(1-10): ";
				cin>>nivel;
				cout<<"Táctica: ";
				cin>>extra;
				if(nivel<11&&nivel>-1)
				{
					Entrenador* entrenador = new Entrenador(nombre,apellido,sobrenombre,nivel,extra);
				}
				else{
					cout<<"Nível inválido, se le asignó 1."<<endl;
					Entrenador* entrenador = new Entrenador(nombre,apellido,sobrenombre,1,extra);
				}
				Jugador* jugadores_equipo = new Jugador[11];

				for (int i = 0; i < 11; ++i)
				{
					cout<<"Datos de jugador: "<<endl;
					cout<<"Nombre: ";
					cin>>nombre;
					cout<<"Apellido: ";
					cin>>apellido;
					cout<<"Sobrenombre: ";
					cin>>sobrenombre;
					cout<<"Nivel(1-10): ";
					cin>>nivel;
					cout<<"Posición: ";
					cin>>extra;

					if(nivel<11&&nivel>-1)
					{
						Jugador* jugador = new Jugador(nombre,apellido,sobrenombre,nivel,extra);
					}
					else
					{
						cout<<"Nível inválido, se le asignó 1."<<endl;
						Jugador* jugador = new Jugador(nombre,apellido,sobrenombre,1,extra);
					}
					jugadores_equipo[i] = jugador;
				}

				cout<<"Ingrese el nombre del equipo: ";
				cin>>nombre;
				Equipo* equipo = new Equipo(nombre);
				equipo->setJugadores(jugadores_equipo);
				equipo->setEntrenador(entrenador);

				equipos.push_back(equipo);
				break;
			}

			case 2:
			{

				break;
			}
		}
		cout<<"Salir?[0=No||1=Si]"<<endl;
		cin>>operacion;
	}while(operacion==0);

}