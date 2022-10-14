//
// Created by David Arévalo on 9/7/22.
//

#include <iostream>
#include <vector>
#include "integer.h"

using namespace std;

int main(){
    cout << "Introduzca un numero positivo: ";
    int n; cin >> n;
    Integer integer(n);

    cout << "Los factores del numero '" << n << "' son: ";
    vector<int> vec = integer.getFactors(n);
    for(auto elem: vec) cout << elem << ", ";
    cout << endl;

    if(integer.isPrime(n)){
        cout << "El numero '" << n << "' es par";
    }
    else{
        cout << "El numero '" << n << "' es impar";
    }
}