//
// Created by Constanza Gabriel on 5/31/24.
//

#include "hash.h"
Nodo* crearNodo(int dato){
    Nodo* nuevoNodo=(Nodo*)malloc(sizeof(Nodo));
    if(nuevoNodo==NULL){
        printf("No hay memoria suficiente.");
        exit(-1);
    }
    nuevoNodo->dato=dato;
    nuevoNodo->siguiente=NULL;
    return nuevoNodo;
}
void insertarOrdenado(Nodo** cabeza, int dato) {
    Nodo* nuevoNodo = crearNodo(dato);
    if (*cabeza == NULL || (*cabeza)->dato > dato) {
        nuevoNodo->siguiente = *cabeza;
        *cabeza = nuevoNodo;
    } else {
        Nodo* actual = *cabeza;
        while (actual->siguiente != NULL && actual->siguiente->dato < dato) {
            actual = actual->siguiente;
        }
        nuevoNodo->siguiente = actual->siguiente;
        actual->siguiente = nuevoNodo;
    }
}
