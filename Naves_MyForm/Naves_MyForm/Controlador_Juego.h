#ifndef _Controlador_
#define _Controlador_

#include "Jugador.h"

class Controlador_Juego
{
private:
	Jugador *Humano;
	Jugador *Maquina;
	//Jugador **Jugadores;
public:
	Controlador_Juego();
	~Controlador_Juego();

	Jugador* GetHumano();
	Jugador* GetMaquina();
	void TimerTick(Graphics^ g);
};

Controlador_Juego::Controlador_Juego()
{
	Humano = new Jugador();
	Maquina = new Jugador();
}
Controlador_Juego::~Controlador_Juego(){}

Jugador* Controlador_Juego::GetHumano() { return this->Humano; }
Jugador* Controlador_Juego::GetMaquina() { return this->Maquina; }

void Controlador_Juego::TimerTick(Graphics^ g)
{
	Humano->DibujarFlota(g);
}

#endif // !_Controlador_