//
// Created by David Arévalo on 9/7/22.
//

#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int n){
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0) return false;
    }
    return true;
}
vector<int> factores(int numero){
    vector<int> factores;
    for(int i = 1; i <= numero; i++){
        if(esPrimo(i)) factores.push_back(i);
    }
    return factores;
}


int main(){
    int num = 30;
    vector<int> vec = factores(num);
    cout << "Los factores del numero '" << num << "' son: ";
    for(auto elem: vec) cout << elem << ", ";
}