#include<iostream>
#include "Numero.h"
#ifndef DECIMAL_H
#define DECIMAL_H

using namespace std;

class Decimal:public Numero{
	
	private:
		
		int longitud;
		int anchura;
		
	protected:
		
	public:
		
		Decimal();
		~Decimal();
};

#endif
