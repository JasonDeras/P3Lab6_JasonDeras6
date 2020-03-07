#include <typeinfo>
#include <string>

#ifndef NUMERO_H
#define NUMERO_H

using namespace std;

class Numero{

  string original;
  public:
    char tipo;
    int entero;
    Numero();
    Numero( string numero );
    virtual int operator-(Numero num2);
    virtual int operator+(Numero num2);
    virtual int operator*(Numero num2);
    //void convertido( string num );
};
#endif