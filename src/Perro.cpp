//
// Created by PC on 3/18/2022.
//

#include <iostream>
#include <sstream>
#include "Perro.h"
using namespace  std;

perro::perro(){
    perro::setNumeroPatas(4);
    perro::setCry("Guau"); };

void perro::doSomething(){ cout<< perro::getCry() <<endl; }