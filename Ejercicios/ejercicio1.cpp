//
// Created by David Arévalo on 8/7/22.
//

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

//Persona.h
class Persona{
    public:
        Persona(string _name, int _age, string _number);

        void setName(string _name);
        void setEdad(int _age);
        void setNumber(string _number);

        string getName() const;
        int getEdad() const;
        string getNumber() const;

    private:
        string name;
        int age;
        string number;
};

//Persona.cpp
Persona::Persona(string _name, int _age, string _number){
    setName(_name);
    setEdad(_age);
    setNumber(_number);

}

void Persona::setName(string _name) {
    name = _name;
}
void Persona::setEdad(int _age) {
    age = _age;
}
void Persona::setNumber(string _number) {
    if(_number.size() == 9){
       number = _number;
    }
    else{
        throw string{"El numero no tiene 9 digitos"};
    }
}

string Persona::getName() const {
    return name;
}
int Persona::getEdad() const {
    return age;
}
string Persona::getNumber() const {
    return number;
}
ostream & operator << (ostream & os, Persona const & p){
    os << "Nombre: " << p.getName() << "\n";
    os << "Edad: " << p.getEdad() << "\n";
    os << "Telefono: " << p.getNumber() << "\n";
    return os;
}

//Main.cpp
void forEach(vector<Persona*> p, function<void(Persona*)> op){
    for(auto elem: p){
        op(elem);
    }
}
Persona* find(vector<Persona*> p, function<bool(Persona*)> op){
    for(auto elem:p){
        if(op(elem)) return elem;
    }
    return nullptr;
}
vector<Persona*> filter(vector<Persona*> p, function<bool(Persona*)> op){
    vector<Persona*> result;
    for(auto elem:p){
        if(op(elem)) result.push_back(elem);
    }
    return result;
}

int main(){
    vector<Persona*> listin;
    string name;
    int age;
    string number;
    cout << "¿A cuantas personas quiere añadir?";
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Persona Nº" << i << endl;
        cin >> name >> age >> number;
        listin.push_back(new Persona(name, age, number));
    }
    forEach(listin, [](Persona* p)->void {
        cout << *p;
        cout << "----------\n";
    });
    cout << "Introduzca nombre de la pesona a buscar: ";
    string nombre; cin >> nombre;
    Persona* p = find(listin, [&](Persona * p)->bool{
        return p->getName() == nombre;

    });
    if(p) cout << *p << "------------\n";
}
