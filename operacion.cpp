#include "operacion.h"
#include <iostream>
using namespace std;

void operacion::cargar1(){
    cout <<"Introduzca el valor 1: "<<endl;
    cin>>valor1;
}

void operacion::cargar2(){
    cout <<"Introduzca el valor 2: "<<endl;
    cin>>valor2;
}

void operacion::mostrar_resultado(){
    cout <<"Resultado: "<<resultado<<endl;
}

