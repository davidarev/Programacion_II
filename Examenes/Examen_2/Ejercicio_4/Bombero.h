//
// Created by David Arévalo on 10/7/22.
//

#ifndef PROGRAMACION_II_BOMBERO_H
#define PROGRAMACION_II_BOMBERO_H

#include <iostream>
#include "Persona.h"

using namespace std;

class Bombero: public Persona{
    public:
        Bombero(int _fuegosApag, int _longBiceps, string const & _nombre, int _year);

        void setFuegos(int _fuegosApag);
        void setBiceps(int _longBiceps);

        int getFuegos() const;
        int getBiceps() const;
    private:
        int fuegosApag;
        int longBiceps;
};

#endif //PROGRAMACION_II_BOMBERO_H
