#include "Numero.h"
#include "Hexadecimal.h"

using namespace std;

Hexadecimal::Hexadecimal( string numero ){
  num = numero;
  convertir( numero );
}

void Hexadecimal::convertir( string num ){
  entero = stoi(num, nullptr, 16);
  tipo = 'h';
}