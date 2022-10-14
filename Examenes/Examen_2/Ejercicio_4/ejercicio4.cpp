//
// Created by David Arévalo on 10/7/22.
//

#include <iostream>
#include <vector>
#include <memory>
#include "Bombero.h"
#include "Futbolista.h"

using namespace std;

int main(){
    vector<shared_ptr<Persona>> personas;
    personas.push_back(make_shared<Futbolista>(38,21,"David",2002));
    personas.push_back(make_shared<Bombero>(12,32,"Jorge",1976));
    for(auto p: personas){
        if(p->getJob() == "Bombero"){
            auto aux = static_pointer_cast<Bombero>(p);
            std::cout << "Soy un bombero con un biceps de " << aux->getBiceps() << "cm\n";
        }
        if(p->getJob() == "Futbolista"){
            auto aux = static_pointer_cast<Futbolista>(p);
            std::cout << "Soy un futbolista y en el banco tengo " << aux->getDinero() << " millones\n";
        }
    }
}