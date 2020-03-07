#include <iostream>
#include <string>
#include "Numero.h"
#ifndef BINARIO_H
#define BINARIO_H

using namespace std;

class Binario:public Numero{
	protected:
    	string numero;
    	int convertido;
  	public:
    	Binario();
    	Binario( string numero );
  //  int operator-(numero num2);
//    int operator+(numero num2);
  //  int operator*(numero num2);
    	string toString();
    	void convertir( string numero );
};
#endif