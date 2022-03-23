//
// Created by PC on 3/18/2022.
//
#include <iostream>
#include <sstream>

using namespace  std;

#ifndef LAB01_INHERITANCE_ANIMAL_H
#define LAB01_INHERITANCE_ANIMAL_H

//Clase Base
class animal {
private:
    int numeroPatas;
    string cry;

public:
    //constructor
    animal(int x, string y);
    animal();

    //destructor
    virtual ~animal();

    //Metodos
    virtual void doSomething();

    //SET
    void setNumeroPatas(int x);
    void setCry(string x);
    //GET
    string getCry();
    int getNumeroPatas();

    //ToString
    string toString()const;
};


#endif //LAB01_INHERITANCE_ANIMAL_H
