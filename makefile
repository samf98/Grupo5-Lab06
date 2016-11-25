main:	main.o Persona.o Equipo.o Jugador.o Partido.o Entrenador.o 
	g++ main.o Persona.o Equipo.o Jugador.o Partido.o Entrenador.o -o main

main.o:	main.cpp Persona.h Equipo.h Jugador.h Partido.h Entrenador.h
	g++ -c main.cpp

Persona.o: Persona.h Persona.cpp
	g++ -c Persona.cpp

Equipo.o:	Equipo.h Equipo.cpp Persona.h Jugador.h Entrenador.h
	g++ -c Equipo.cpp

Jugador.o:	Jugador.h Jugador.cpp Persona.h
	g++ -c Jugador.cpp

Partido.o:	Partido.h Equipo.h
	g++ -c Partido.cpp

Entrenador.h:	Entrenador.h Persona.h
	g++ -c Entrenador.cpp
