//
// Created by PC on 3/22/2022.
//

#ifndef LAB01_INHERITANCE_GATO_H
#define LAB01_INHERITANCE_GATO_H


#include "Animal.h"
#include <iostream>
#include <sstream>
using namespace  std;

//Clase Derivada
class gato : public animal {
public:
    gato();

    void doSomething();
};

#endif //LAB01_INHERITANCE_GATO_H
