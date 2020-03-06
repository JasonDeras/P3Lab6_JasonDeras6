#include "Numero.h"
#include <typeinfo>
#include <iomanip>

using namespace std;

Numero::Numero(){
	tipo="";
	obnumero="";
}

Numero::Numero(string tipo,string obnumero){
	this->tipo=tipo;
	this->obnumero=obnumero;
}

string Numero::getTipo(){
	return tipo;
}

string Numero::toString(){
	string salida=tipo+" "+obnumero;
	return salida;
}//Fin del metodo para imprimir 

Numero::~Numero(){
	
}