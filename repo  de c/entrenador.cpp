#include <iostream>
#include "Entrenador.h"
using namespace std;


struct EntrenadorSt {
string nombre;
Pokemon* pokemon;
int cantPokemon;
}

Entrenador consEntrenador(string nombre, int cantidad, Pokemon* pokemon){
    EntrenadorSt* ent= new EntrenadorSt
    ent->nombre= nombre ; ent->pokemon ; ent->cantPokemon= cantidad
}
//Dado un nombre, una cantidad de pokémon, y un array de pokémon de ese tamaño, devuelve
//un entrenador.


string nombreDeEntrenador(Entrenador e){
    return e->nombre
}
//Devuelve el nombre del entrenador.


int cantidadDePokemon(Entrenador e){
    return e->cantPokemon
}
//Devuelve la cantidad de pokémon que posee el entrenador.


int cantidadDePokemonDe(TipoDePokemon tipo, Entrenador e){
    int cant   = 0
    for (int i = 0 ; i<=cantidadDePokemon(e); i++){
        if (tipoDePokemon(e->pokemon[i]) == tipo) {  
            cant++;
        }
    }
    return cant;
}
//Devuelve la cantidad de pokémon de determinado tipo que posee el entrenador.


Pokemon pokemonNro(int i, Entrenador e){
    return e->pokemon [i-1];
}
//Devuelve el pokémon número i de los pokémon del entrenador.
//Precondición: existen al menos i − 1 pokémon.


bool leGanaATodos(Entrenador e1, Entrenador e2){
    int i = 0
    while ( i<= cantidadDePokemon(e1)){
       while( j<= cantidadDePokemon(e2)&& superaA(i,j)){
        j++
        } 
    if (j == cantidadDePokemon(e2)) {
            return true;  
        }
        i++;
    }
    return false
}    

//Dados dos entrenadores, indica si, para cada pokémon del segundo entrenador, el primero
//posee al menos un pokémon que le gane.



//////////////////
int uno_Si(bool s){
    if(s){
        return 1;
    }
    return 0;
}

////////////////////////










ArrayList append(ArrayList xs, ArrayList ys){
  ArrayList nArray= newArrayListWith(((lengthAL xs)+(lengthAL ys)));
  agregarArrayList (xs , nArray) ;
  agregarArrayList (ys , nArray) ;
  return nArray
}
//Crea una nueva lista a partir de la primera y la segunda (en ese orden).

void agregarArrayList(ArrayList al ,ArrayList nal){
    for (int i=0 ; i<= lengthAL(al); i++){
        add ((al->elementos [i]),nal);
    }
    return nal;
}
