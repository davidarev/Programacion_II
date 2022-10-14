//
// Created by David Arévalo on 8/7/22.
//

#include <iostream>

using namespace std;

//NumeroPositivo.h
class NumeroPositivo{
    public:
        NumeroPositivo(float _num);

        void setNum(float _num);
        float getNum() const;

        float divideBy(float otherNumber);
        float multiplyBy(float otherNumber);
        float add(float otherNumer);

    private:
        float num;
};

//NumeroPositivo.cpp
NumeroPositivo::NumeroPositivo(float _num){
    setNum(_num);
}

void NumeroPositivo::setNum(float _num) {
    if(_num <= 0){
        throw string("El numero debe ser positivo");
    }
    else{
        num = _num;
    }
}

float NumeroPositivo::getNum() const{
    return num;
}
float NumeroPositivo::divideBy(float otherNumber){
    if(otherNumber == 0){
        throw string("No se puede dividir un numero entre 0");
    }
    else if(otherNumber < 0){
        throw string("El numero debe ser positivo");
    }
    else{
        num /= otherNumber;
        return num;
    }
}
float NumeroPositivo::multiplyBy(float otherNumber){
    if(otherNumber == 0){
        throw string("Un numero multiplicado por 0 es igual a 0");
    }
    else if(otherNumber < 0){
        throw string("El numero debe ser positivo");
    }
    else{
        num *= otherNumber;
        return num;
    }
}
float NumeroPositivo::add(float otherNumer){
    float aux = num + otherNumer;
    if(aux <= 0) {
        throw string{"El resultado no es un numero positivo"};
    }
    num = aux;
    return num;
}

//Main.cpp
int main(){
    cout << "Introduce un numero positivo: ";
    float num; cin >> num;
    try{
        NumeroPositivo numPos{num};
        cout << "Dividirlo por: "; cin >> num;
        cout << numPos.divideBy(num) << endl;
        cout << "Multiplicarlo por: "; cin >> num;
        cout << numPos.multiplyBy(num) << endl;
        cout << "Sumarlo por: "; cin >> num;
        cout << numPos.add(num) << endl;
    }
    catch (string e){
        cout << e << endl;
    }
    return 0;
}
