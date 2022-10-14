//
// Created by David Arévalo on 10/7/22.
//

#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(string const& _nombre, int _year, string const& _job): job{_job}{
    setNombre(_nombre);
    setYear(_year);
}

void Persona::setNombre(string _nombre){
    nombre = _nombre;
}
void Persona::setYear(int _year){
    if(_year > 1900){
        year = _year;
    }
    else{
        throw string{"El año debe ser mayor a 1900"};
    }
}

string Persona::getNombre() const{
    return nombre;
}
int Persona::getYear() const{
    return year;
}
const string &Persona::getJob() const{
    return job;
}
