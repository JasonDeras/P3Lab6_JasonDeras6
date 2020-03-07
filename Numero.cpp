#include "Numero.h"

using namespace std;

Numero::Numero(){
}

Numero::Numero( string numero ){
  original = numero;
  //convertido( num );
}

/*void numero::convertido( string num ){
  if( num[num.size()-1] == 'b' ){
    string bin = "";
    tipo = 'b';
    for (int i = 0; i < num.size()-1; i++) bin+=num[i];
    entero = stoi( bin , nullptr, 2);
  }else if( num[0] == '0' && num[1] == 'c' ){
    string oct = "";
    tipo = 'o';
    for (int i = 2; i < num.size(); i++) oct+=num[i];
    entero = stoi(oct, nullptr, 8);
  }else if( num[0] == '0' && num[1] == 'x' ){
    entero = stoi(num, nullptr, 16);
    tipo = 'h';
  }else{
    entero = stoi(num, nullptr, 10);
    tipo = 'e';
  }
}*/

int Numero::operator-(Numero num2){
  return (*this).entero-num2.entero;
}

int  Numero::operator+(Numero num2){
  return (*this).entero + num2.entero;
}

int Numero::operator*(Numero num2){
  return (*this).entero * num2.entero;
}