#include "Numero.h"
#include "Hexadecimal.h"

using namespace std;

Hexadecimal::Hexadecimal( string numero ){
  num = numero;
  convertir( numero );
}

/*int numero::operator-(numero num2){
  return (*this).entero - num2.entero;
}
int numero::operator+(numero num2){
  return (*this).entero + num2.entero;
}
int numero::operator*(numero num2){
  return (*this).entero * num2.entero;
}*/

void Hexadecimal::convertir( string num ){
  entero = stoi(num, nullptr, 16);
  tipo = 'h';
}