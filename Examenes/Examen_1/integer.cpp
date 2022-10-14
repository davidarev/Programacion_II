//
// Created by David Arévalo on 9/7/22.
//

#include "integer.h"

using namespace std;

Integer::Integer(int _num){
    setValue(_num);
}

void Integer::setValue(int _num){
    if(_num > 0){
        num = _num;
    }
    else{
        throw string{"El numero debe ser mayor que 0"};
    }
}
int Integer::getValue() const{
    return num;
}

vector<int> Integer::getFactors(int _num){
    vector<int> factores;
    for(int i = 1; i <= _num; i++){
        if(isPrime(i)) factores.push_back(i);
    }
    return factores;
}
bool Integer::isPrime(int _num){
    for(int i = 2; i <= _num / 2; i++){
        if(_num % i == 0) return false;
    }
    return true;
}