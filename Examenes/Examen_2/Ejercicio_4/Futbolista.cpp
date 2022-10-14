//
// Created by David Arévalo on 10/7/22.
//

#include <iostream>
#include "Futbolista.h"

using namespace std;

Futbolista::Futbolista(int _goles, int _millones, string const& _nombre, int _year): Persona{_nombre, _year, "Futbolista"}{
    setGoles(_goles);
    setDinero(_millones);
}

void Futbolista::setGoles(int _goles){
    if(_goles < 0){
        throw string{"EL numero de goles debe ser positivo"};
    }
    else{
        goles = _goles;
    }
}
void Futbolista::setDinero(int _millones){
    if(_millones < 0){
        throw string{"La cantidad de dinero debe ser positivo"};
    }
    else{
        millones = _millones;
    }
}

int Futbolista::getGoles() const{
    return goles;
}
int Futbolista::getDinero() const{
    return millones;
}