//
// Created by David Arévalo on 10/7/22.
//
#include <iostream>
#include "Bombero.h"

using namespace std;

Bombero::Bombero(int _fuegosApag, int _longBiceps, string const & _nombre, int _year): Persona(_nombre, _year, "Bombero"){
    setFuegos(_fuegosApag);
    setBiceps(_longBiceps);
}

void Bombero::setFuegos(int _fuegosApag){
    if(_fuegosApag < 0){
        throw string{"EL numero de fuegos apagados debe ser positivo"};
    }
    else{
        fuegosApag = _fuegosApag;
    }
}
void Bombero::setBiceps(int _longBiceps){
    if(_longBiceps < 0){
        throw string{"La longitud del biceps debe ser positivo"};
    }
    else{
        longBiceps = _longBiceps;
    }
}

int Bombero::getFuegos() const{
    return fuegosApag;
}
int Bombero::getBiceps() const{
    return longBiceps;
}