#include <iostream>
#include "Pokemon.h"
using namespace std;

typedef string TipoDePokemon;

struct PokeSt {
TipoDePokemon tipo;
int vida;
}


Pokemon consPokemon(TipoDePokemon tipo){
  PokeSt* poke = new PokeSt;
  poke-> TipoDePokemon tipo ;
  return poke
}
//Dado un tipo devuelve un pokémon con 100 % de energía.


tipo tipoDePokemon(Pokemon p)
//Devuelve el tipo de un pokémon.


int energia(Pokemon p)
//Devuelve el porcentaje de energía.


void perderEnergia(int energia, Pokemon p)
//Le resta energía al pokémon.


bool superaA(Pokemon p1, Pokemon p2)
//Dados dos pokémon indica si el primero, en base al tipo, es superior al segundo. Agua supera
//a fuego, fuego a planta y planta a agua. Y cualquier otro caso es falso.