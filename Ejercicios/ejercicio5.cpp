//
// Created by David Arévalo on 8/7/22.
//

#include <iostream>
#include <vector>

using namespace std;

template <typename T> int suma(T const & num1, T const & num2){
    return num1 + num2;
}
template <typename T> int resta(T const & num1, T const & num2){
    return num1 + num2;
}
template <typename T> int multiplicacion(T const & num1, T const & num2){
    return num1 + num2;
}
int main(){
    cout << suma(4, 5) << endl;
    cout << suma(4.5, 3.8) << endl;
    cout << resta(9, 5) << endl;
    cout << multiplicacion(5, 9) << endl;
    cout << multiplicacion(10.3, 11.8) << endl;
}
