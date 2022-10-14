//
// Created by David Arévalo on 8/7/22.
//

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

//Persona.h
class Persona{
    public:
        Persona(string _nombre, int _edad, string _DNI);

        void setNombre(string _nombre);
        void setEdad(int _edad);
        void setDNI(string _DNI);

        string getNombre() const;
        int getEdad() const;
        string getDNI() const;
    private:
        string nombre;
        int edad;
        string DNI;
};

//Persona.cpp
Persona::Persona(string _nombre, int _edad, string _DNI){
    setNombre(_nombre);
    setEdad(_edad);
    setDNI(_DNI);
}

void Persona::setNombre(string _nombre){
    nombre = _nombre;
}
void Persona::setEdad(int _edad){
    edad = _edad;
}
void Persona::setDNI(string _DNI){
    DNI = _DNI;
}

string Persona::getNombre() const{
    return nombre;
}
int Persona::getEdad() const{
    return edad;
}
string Persona::getDNI() const{
    return DNI;
}

//Main.cpp
template<class T> T find(vector<T> vec, function<bool(T)> op){
    for(T elem: vec){
        if(op(elem)) {
            return elem;
        }
    }
    return nullptr;
}

int main(){
    vector<shared_ptr<Persona> > lista;
    lista.push_back(make_shared<Persona>(Persona{"Alberto", 27, "12345678K"}));
    lista.push_back(make_shared<Persona>(Persona{"Maria", 17, "22222222K"}));
    lista.push_back(make_shared<Persona>(Persona{"Pepe", 23, "11111111K"}));
    shared_ptr<Persona> found = find<shared_ptr<Persona>>(
            lista,
            [](std::shared_ptr<Persona> p) -> bool {
                return (p->getDNI() == "11111111K");
            });

    if(found.get()){
        cout << found->getNombre() << "\n";
    }
}
