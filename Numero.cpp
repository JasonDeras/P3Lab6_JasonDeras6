#include "Numero.h"

using namespace std;

Numero::Numero(){
}

Numero::Numero( string numero ){
  original = numero;
}

int Numero::operator-(Numero num2){
  return (*this).entero-num2.entero;
}

int  Numero::operator+(Numero num2){
  return (*this).entero + num2.entero;
}

int Numero::operator*(Numero num2){
  return (*this).entero * num2.entero;
}