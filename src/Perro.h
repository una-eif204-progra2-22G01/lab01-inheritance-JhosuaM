//
// Created by PC on 3/18/2022.
//

#include "Animal.h"
#include <iostream>
#include <sstream>
using namespace  std;

#ifndef LAB01_INHERITANCE_PERRO_H
#define LAB01_INHERITANCE_PERRO_H

//Clase Derivada
class perro : public animal {
public:
    perro();

    void doSomething();
};

#endif //LAB01_INHERITANCE_PERRO_H
