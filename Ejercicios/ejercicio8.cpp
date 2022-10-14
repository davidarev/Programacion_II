//
// Created by David Arévalo on 9/7/22.
//

#include <iostream>
#include <math.h>

using namespace std;

//Cuadrado.h
class Cuadrado{
    public:
        Cuadrado(float _longitud);

        void setLongitud(float _longitud);
        float getLongitud() const;

        float hallarPerimetro(float _longitud);
        float hallarArea(float _longitud);
        float hallarDiagonal(float _longitud);
    private:
        float perimetro;
        float area;
        float diagonal;
        float longitud;
};

//Cuadrado.cpp
Cuadrado::Cuadrado(float _longitud){
    setLongitud(_longitud);
}
void Cuadrado::setLongitud(float _longitud){
    if(_longitud <= 0){
        throw string{"La longitud debe ser un numero positivo"};
    }
    else{
        longitud = _longitud;
    }
}
float Cuadrado::getLongitud() const{
    return longitud;
}

float Cuadrado::hallarPerimetro(float _longitud){
    perimetro = _longitud * 4;
    return perimetro;
}
float Cuadrado::hallarArea(float _longitud){
    area = _longitud * _longitud;
    return area;
}
float Cuadrado::hallarDiagonal(float _longitud){
    float altura = _longitud;
    float base = _longitud / 2;
    float altura2 = pow(altura, 2);
    float base2 = pow(base, 2);
    diagonal = sqrt(altura2 + base2);
    return diagonal;
}

//Triangulo.h
class Triangulo{
    public:
        Triangulo(float _longitud);

        void setLongitud(float _longitud);
        float getLongitud() const;

        float hallarPerimetro(float _longitud);
        float hallarArea(float _longitud, float altura);
        float hallarAltura(float _longitud);
    private:
        float perimetro;
        float area;
        float altura;
        float longitud;
};

//Triangulo.cpp
Triangulo::Triangulo(float _longitud){
    setLongitud(_longitud);
}

void Triangulo::setLongitud(float _longitud){
    if(_longitud <= 0){
        throw string{"La longitud debe ser un numero positivo"};
    }
    else{
        longitud = _longitud;
    }
}
float Triangulo::getLongitud() const{
    return longitud;
}

float Triangulo::hallarPerimetro(float _longitud){
    perimetro = _longitud * 3;
    return perimetro;
}
float Triangulo::hallarArea(float _base, float _altura){
    area = _base * _altura / 2;
    return area;
}
float Triangulo::hallarAltura(float _longitud){
    float diagonal = _longitud;
    float base = _longitud / 2;
    float resta = (pow(diagonal, 2) - pow(base, 2));
    altura = sqrt(resta);
    return altura;
}

//Pentagono.h
class Pentagono{
public:
    Pentagono(float _longitud);

    void setLongitud(float _longitud);
    float getLongitud() const;

    float hallarPerimetro(float _longitud);
    float hallarArea(float _longitud, float _apotema);
    float hallarApotema(float _longitud);
private:
    float perimetro;
    float area;
    float apotema;
    float longitud;
};

//Pentagono.cpp
Pentagono::Pentagono(float _longitud){
    setLongitud(_longitud);
}

void Pentagono::setLongitud(float _longitud){
    if(_longitud <= 0){
        throw string{"La longitud debe ser un numero positivo"};
    }
    else{
        longitud = _longitud;
    }
}
float Pentagono::getLongitud() const{
    return longitud;
}

float Pentagono::hallarPerimetro(float _longitud){
    perimetro = _longitud * 5;
    return perimetro;
}
float Pentagono::hallarArea(float _longitud, float _apotema){
    area = _longitud * _apotema / 2;
    return area;
}
float Pentagono::hallarApotema(float _longitud){
    float angulo = 360 / 5;
    apotema = _longitud / (2 * atan(angulo / 2));
    return apotema;
}

//Main.cpp
int main(){
    cout << "Introduce la longitud del lado del cuadrado: ";
    float lado; cin >> lado;
    Cuadrado cuadrado(lado);
    cout << "Su area es: " << cuadrado.hallarArea(lado) << endl;
    cout << "Su perimetro es: " << cuadrado.hallarPerimetro(lado) << endl;
    cout << "Su diagonal es: " << cuadrado.hallarDiagonal(lado) << endl << endl;

    cout << "Introduce la longitud del lado del triangulo: ";
    cin >> lado;
    Triangulo triangulo(lado);
    cout << "Su perimetro es: " << triangulo.hallarPerimetro(lado) << endl;
    cout << "Su altura es: " << triangulo.hallarAltura(lado) << endl;
    cout << "Su area es: " << triangulo.hallarArea(lado, triangulo.hallarAltura(lado)) << endl << endl;

    cout << "Introduce la longitud del lado del pentagono: ";
    cin >> lado;
    Pentagono pentagono(lado);
    cout << "Su perimetro es: " << pentagono.hallarPerimetro(lado) << endl;
    cout << "Su apotema es: " << pentagono.hallarApotema(lado) << endl;
    cout << "Su area es: " << pentagono.hallarArea(lado, pentagono.hallarApotema(lado)) << endl << endl;
}
