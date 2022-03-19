//
// Created by PC on 3/18/2022.
//

#include <iostream>
#include <sstream>
#include "Animal.h"
using namespace  std;

animal::animal(int x, string y){
    numeroPatas = x;
    cry = y; };

animal::animal(){
    numeroPatas = 0;
    cry = "0";
};

void animal::doSomething(){cout<<"Animal indefinido"<< endl;};

void animal::setNumeroPatas(int x){numeroPatas = x;};
void animal::setCry(string x){cry = x;};

string animal::getCry(){ return(cry);}
int animal::getNumeroPatas(){ return(numeroPatas);}

animal::~animal(){ cout<<"~animal()/n"<<endl; };


string animal::toString()const{
stringstream s;
s<<numeroPatas<<endl;
s<<cry<<endl;
return s.str();
};