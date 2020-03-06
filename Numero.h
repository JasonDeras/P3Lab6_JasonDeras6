#include <typeinfo>
#include <string>

#ifndef NUMERO_H
#define NUMERO_H

using namespace std;

class Numero{
	
	protected:
		
		string tipo;
		string obnumero;

	public:
		
		Numero();
		Numero(string,string);
		string getTipo();
		string toString();
		~Numero();
};

#endif