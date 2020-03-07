#include <iostream>
#include <string>
#include "Numero.h"
#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H

using namespace std;

class Hexadecimal:public Numero{
	protected:
    	string num;
    	int convertido;
  	public:
    	Hexadecimal();
    	Hexadecimal( string numero );
    //int operator-(numero num2);
    //int operator+(numero num2);
    //int operator*(numero num2);
    	string toString();
    	void convertir( string num);
};
#endif
