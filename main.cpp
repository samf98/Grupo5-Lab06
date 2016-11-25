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
				break;
			}

			case 2:
			{

				break;
			}

			case 3:
			{

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