#include "Numero.h"
#include "Binario.h"

using namespace std;

Binario::Binario( string numero ){
  this->numero = numero;
  convertir( numero );
}

void Binario::convertir(string numero){
  string binario = "";
  tipo = 'b';
  for (int i = 0; i < numero.size()-1; i++) binario+=numero[i];
  entero = stoi( binario , nullptr, 2);
}