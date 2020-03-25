#include "iostream"
#include "stdio.h"

using namespace std;

int cuadrado(int num);
void cuadrado2(int num);
void direccion(int num);
void invertir(int a, int b);
void ordenar(int a, int b);

int main(){
    int entero = 2, entero_b = 6;
    printf("Funcion Cuadrado: %d\n\n", cuadrado(entero));
    cuadrado2(entero);
    direccion(entero);
    invertir(entero, entero_b);
    ordenar(entero,entero_b);
    return 0;
}

int cuadrado(int num){
    num = num*num;
} 

void cuadrado2(int num){
    printf("Funcion Cuadrado en void: %d\n\n", num*num);
}

void direccion(int num){
    printf("Funcion Direccion:\nDireccion de memoria: %p\nContenido: %d\n\n", &num, num);
}

void invertir(int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("Funcion Invertir:\nValor de A: %d\nValor de B: %d\n\n",a,b);
}

void ordenar(int a, int b){
    printf("Valor del Numero A: ");
    scanf("%d", &a);
    printf("Valor del Numero B: ");
    scanf("%d", &b);
    if(a<b){
        printf("\nMenor: A = %d\nMayor: B = %d", a, b);
    }else if (a>b)
    {
        printf("\nMenor: B = %d\nMayor: A = %d", b, a);
    }else
    {
        printf("\nAmbos numeros son iguales y su valor es: %d", b);
    }
}