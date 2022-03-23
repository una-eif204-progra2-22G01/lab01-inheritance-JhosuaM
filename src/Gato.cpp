//
// Created by PC on 3/18/2022.
//

#include <iostream>
#include <sstream>
#include "Gato.h"
using namespace  std;

gato::gato(){
    gato::setNumeroPatas(4);
    gato::setCry("Miau"); };

void gato::doSomething(){ cout<< gato::getCry() <<endl; }