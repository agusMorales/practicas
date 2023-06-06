#include <iostream>
#include "arrayList.h"
using namespace std;

struct ArrayListSt {
int cantidad; // cantidad de elementos
int* elementos; // array de elementos
int capacidad; // tamaño del array
}


ArrayList newArrayList(){
    ArrayListSt * array = new ArrayListSt;
    array-> cantidad  =0; 
    array-> elementos =new int[16] ; 
    array-> capacidad = 16;
    return array;

}
//Crea una lista con 0 elementos.
//Nota: empezar el array list con capacidad 16.

ArrayList newArrayListWith(int capacidad){
    ArrayListSt * array = new ArrayListSt;
    array-> cantidad  =0; 
    array-> elementos =new int[capacidad] ; 
    array-> capacidad = capacidad;
    return array;
}
//Crea una lista con 0 elementos y una capacidad dada por parámetro.

int lengthAL(ArrayList xs){
    return xs-> cantidad;
}
//Devuelve la cantidad de elementos existentes.

int get(int i, ArrayList xs){
    if (i < lengthAL (xs)){
        return xs->elemento[i];
    }
    
}
//Devuelve el iésimo elemento de la lista.

void set(int i, int x, ArrayList xs){
    if (i < lengthAL(xs)) {
        xs->elementos[i] = x;
    }
}
//Reemplaza el iésimo elemento por otro dado.

void resize(int capacidad, ArrayList xs){
    int* nArray = new int[capacidad];
    for (int i=0 ; i< lengthAL (xs);i++){
            nArray [i]=xs->elementos[i];
    } 
    delete xs->elementos;
    xs->capacidad= capacidad;
    xs->elementos= nArray;
    

}
//Decrementa o aumenta la capacidad del array.
//Nota: en caso de decrementarla, se pierden los elementos del final de la lista.




void add(int x, ArrayList xs) {
    if (xs->cantidad == xs->capacidad) {
        resize(xs->capacidad+1, xs);
    }
    
    xs->elementos[xs->cantidad] = x;
    xs->cantidad++;
}

void add(int x, ArrayList xs) {
    for (int i = 0; i < xs->cantidad; i++) {
        xs->elementos[i] = x;
    }
}

//Agrega un elemento al final de la lista.

void remove(ArrayList xs){
    if (xs->cantidad>0){
       int i = xs->cantidad-1
       xs->cantidad--;
       delete xs->elementos[i];
    }
}
//Borra el último elemento de la lista



//////////////////////////////////////////////


int sumatoria(ArrayList xs){
    int suma= 0;
    for (int i = 0; i < xs->cantidad; i++){
        suma+= xs->elementos[i];
    }
    return suma;
}
//Devuelve la suma de todos los elementos.

void sucesores(ArrayList xs){
    for (int i = 0; i < xs->cantidad; i++){
         xs->elementos[i]++;
    }
    
}
//Incrementa en uno todos los elementos.

bool pertenece(int x, ArrayList xs){
    int pos = 0;
    while(pos<xs->cantidad && x != xs->elemento[pos]){
        pos++;
    }
    return x == xs->elemento[pos];
}
//Indica si el elemento pertenece a la lista.


int uno_Si(bool s){
    if(s){
        return 1;
    }
    return 0;
}


int apariciones(int x, ArrayList xs){
    int veces  = 0
    for (int i = 0; i <xs->cantidad; i++){
        veces+= uno_Si(x==xs->elementos[i])
    }
    return veces
}
//Indica la cantidad de elementos iguales a x.

///////// 
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
///////

int minimo(ArrayList xs){
    int miniAhora= xs->elementos[0];
    for(int n= 1;n<xs->cantidad ;n++){
        miniAhora=min(miniAhora,n)
    }
    return 
}
//Devuelve el elemento más chico de la lista