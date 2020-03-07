#include "Numero.h"
#include "Octal.h"

using namespace std;

Octal::Octal( string numero ){
  this->numero = numero;
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

void Octal::convertir( string numero ){
  string octal = "";
  tipo = 'o';
  for (int i = 2; i < numero.size(); i++) octal+=numero[i];
  entero = stoi(octal, nullptr, 8);
}