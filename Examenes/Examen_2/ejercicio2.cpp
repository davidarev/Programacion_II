//
// Created by David Arévalo on 10/7/22.
//

#include <iostream>

using namespace std;

string cadena(string const & text, int num){
    if(num < 0){
        throw string{"El numero debe ser positivo"};
    }
    else {
        string texto{""};
        for (int i = 0; i < num; i++) {
            texto += text;
        }
        return texto;
    }
}

int main(){
    cout << cadena("hola", 3);
}