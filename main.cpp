#include <iostream>
#include "suma.h"
#include "resta.h"
using namespace std;



int main(int, char**) {
    
    cout<<"Vamos a hacer una SUMA: "<<endl;

    suma s;
    s.cargar1();
    s.cargar2();
    s.operar();
    s.mostrar_resultado();

    cout<<"Vamos a hacer una RESTA: "<<endl;

    resta r;
    r.cargar1();
    r.cargar2();
    r.operar();
    r.mostrar_resultado();
}
