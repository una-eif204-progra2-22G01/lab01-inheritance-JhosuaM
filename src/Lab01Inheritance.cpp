#include <iostream>  // allows program to output data to the screen
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"

// function main begins program execution
int main(int argc, const char *argv[]) {


    animal a(15,"wow");

    cout<<a.getCry()<<endl;

    perro b;

     b.doSomething();
     cout<<b.toString();

     gato c;
    cout<<c.toString();


}  // end function main