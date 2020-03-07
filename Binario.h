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
    	string toString();
    	void convertir( string numero );
};
#endif