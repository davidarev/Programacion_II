//
// Created by David Arévalo on 10/7/22.
//

#ifndef PROGRAMACION_II_PERSONA_H
#define PROGRAMACION_II_PERSONA_H

#include <iostream>

using namespace std;

class Persona{
    public:
        Persona(string const& _nombre, int _year, string const& _job);

        void setNombre(string _nombre);
        void setYear(int _year);

        string getNombre() const;
        int getYear() const;
        const string &getJob() const;
    private:
        string nombre;
        string job;
        int year;
};

#endif //PROGRAMACION_II_PERSONA_H
