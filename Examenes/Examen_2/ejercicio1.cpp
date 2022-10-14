//
// Created by David Arévalo on 10/7/22.
//

#include <iostream>

using namespace std;

int multiplo(int num){
    if(num < 0){
        throw string{"El numero debe ser positivo"};
    }
    else{
        int multiplo = 0;
        for(int i = num - 1; i > 0; i--){
            if(i % 3 == 0){
               multiplo = i;
               break;
            }
        }
        return multiplo;
    }
}

int main(){
    cout << "Introduce un numero: ";
    int num; cin >> num;
    cout << "El mayor multiplo de 3 menor que el numero '" << num << "' es: " << multiplo(num) << endl;
}
