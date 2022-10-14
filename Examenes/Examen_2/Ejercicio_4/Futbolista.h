//
// Created by David Arévalo on 10/7/22.
//

#ifndef PROGRAMACION_II_FUTBOLISTA_H
#define PROGRAMACION_II_FUTBOLISTA_H

#include <iostream>
#include "Persona.h"

using namespace std;

class Futbolista: public Persona{
public:
    Futbolista(int _goles, int _millones, string const & _nombre, int _year);

    void setGoles(int _goles);
    void setDinero(int _millones);

    int getGoles() const;
    int getDinero() const;
private:
    int goles;
    int millones;
};

#endif //PROGRAMACION_II_FUTBOLISTA_H
