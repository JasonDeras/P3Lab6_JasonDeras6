#include <iostream>
#include <string>
#include "Numero.h"

#ifndef OCTAL_H
#define OCTAL_H

using namespace std;

class Octal:public Numero{
	
  protected:
    string numero;
    int convertido;
  public:
    Octal();
    Octal( string numero );
    //int operator-(numero num2);
    //int operator+(numero num2);
    //int operator*(numero num2);
    string toString();
    void convertir( string numero );
};

#endif
