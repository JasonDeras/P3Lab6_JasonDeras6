#include "Numero.h"
#include "Octal.h"

using namespace std;

Octal::Octal( string numero ){
  this->numero = numero;
}

void Octal::convertir( string numero ){
  string octal = "";
  tipo = 'o';
  for (int i = 2; i < numero.size(); i++) octal+=numero[i];
  entero = stoi(octal, nullptr, 8);
}