//
// Created by David Arévalo on 9/7/22.
//

#ifndef PROGRAMACION_II_INTEGER_H
#define PROGRAMACION_II_INTEGER_H

#include <iostream>
#include <vector>

using namespace std;

class Integer{
    public:
        Integer(int _num);

        void setValue(int _num);
        int getValue() const;

        vector<int> getFactors(int _num);
        bool isPrime(int _num);
    private:
        int num;
};

#endif //PROGRAMACION_II_INTEGER_H
