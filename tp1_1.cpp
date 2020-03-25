#include "iostream"
#include "stdio.h"

using namespace std;

int main(){
    int entero = 1;
    int * puntero = &entero;

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &entero);
    printf("Direccion de de memoria del puntero: %p\n", &puntero);
    printf("Tamanio de memoria utilizado por la variable: %d\n", sizeof(entero));
    return 0;
}