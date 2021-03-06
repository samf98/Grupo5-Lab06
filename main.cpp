#include <iostream>
#include <vector>
#include "Persona.h"
#include "Entrenador.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Partido.h"
#include <time.h>

using namespace std;

int random();

int main()
{
	vector<Equipo*> equipos;

	int operacion=0;
	do
	{
		cout<<"1-Crear Equipo"<<endl<<"2-Comenzar Simulación";
		cin>>operacion;
		switch(operacion)
		{
			case 1:
			{
				Entrenador* entrenador;
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
					entrenador = new Entrenador(nombre,apellido,sobrenombre,nivel,extra);
				}
				else{
					cout<<"Nível inválido, se le asignó 1."<<endl;
					entrenador = new Entrenador(nombre,apellido,sobrenombre,1,extra);
				}
				Jugador* jugadores_equipo = new Jugador[11];

				Jugador* jugador;
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
						jugador = new Jugador(nombre,apellido,sobrenombre,nivel,extra);
					}
					else
					{
						cout<<"Nível inválido, se le asignó 1."<<endl;
						Jugador* jugador = new Jugador(nombre,apellido,sobrenombre,1,extra);
					}
					jugadores_equipo[i] = *jugador;
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
				int elecciones;
				if(equipos.size()<4)
					cout<<"No hay suficientes equipos."<<endl;
				else
				{
					cout<<"Equipos para el torneo, (1-Random, 2-Elegidos por el usuario) ";
					cin>>elecciones;
					if(elecciones==1||elecciones==2)
					{
						if(elecciones==1)
						{

						}
						else
						{

						}
					}
					else
					{
						cout<<"Número invalido, se escoge random por default."<<endl;
						
					}
				}
				break;
			}
		}
		cout<<"Salir?[0=No||1=Si]"<<endl;
		cin>>operacion;
	}while(operacion==0);

}

/*int random(){

	int numero, numero2;

	srand (time(NULL));

	numero2 = equipos.size();
	//cout << numero2;

	numero = rand() % numero2 + 1;

	return numero;
	
	}
*/

		
