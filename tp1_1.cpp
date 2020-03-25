#include "iostream"
#include "stdio.h"

using namespace std;

int main(){
    int entero = 1;
    int * puntero = &entero;

    cout << *puntero << endl;
    cout << puntero << endl;
    cout << &entero << endl;
    cout << &puntero << endl;
    cout << sizeof(entero) << endl;
}