#include <typeinfo>
#include <string>

#ifndef NUMERO_H
#define NUMERO_H

class Numero{
	
	private: 

		string obtnumero;

	public: 

		Numero();
		Numero(string);
		virtual string toString()=0;

		~Numero();
};

#endif