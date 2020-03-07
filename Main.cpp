
#include <iostream>
#include "Numero.h"
#include "Hexadecimal.h"
#include "Octal.h"
#include "Binario.h"
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

//Vector de numeros
vector< string > lista_numeros;


//Validacion de los nmeros
void Validacion(string);

//Listar
void Listar();

//Operaciones
void Operareracion();
void Suma();
void Resta();
void Multiplicacion();

//Impresion
string Formato( int resultado );

//Binarios
int Biario( int numero );

//Octales
int Octal( int numero );

//Hexadecimales
string Hexadecimal( int numero );

//Numeros
Numero numero1("0"), numero2("0");


//Tipo de numero
char tipo( string numero );


int main(){
  
  int opcion;
  int usuario=1;
  numero1.entero = 0;
  numero1.tipo = ' ';
  
  while(usuario==1){

  	cout<<"1, Ingresar un numero"<<endl;
  	cout<<"2. Listar numeros"<<endl;
  	cout<<"3. Operacion"<<endl;
  	cout<<"Ingrese una opcion: ";
  	cin>>opcion;

  	cout<<endl<<endl;

  	switch(opcion){

  		case 1:{
  			
  			string numero;
  			cout << "Ingrese el numero: ";
 			cin >> numero;
 			Validacion(numero);

  		break;}

  		case 2:{
  			listar();
  		break;}

  		case 3:{
  			oprear();
  		break;}
  		
  		default:{
  			cout<<"Opcion no valida"<<endl<<endl;
  		break;}
  	
  	}//Fin del caso de las opciones

  	cout<<"Desea volver al menu[1.Si,2.-No]: ";
  	cin>>usuario;
  	cout<<endl;

  }//Fin del while del usuario

}//Fin del main

void Validacion(string numero){
	
	int resp=1;
	size_t binario = numero.find("b");
	size_t hexadecimal = numero.find("0x");
	size_t foundoc = num.find("0c");

	if (binario==numero.size()-1){
		for (int i = 0; i < numero.size(); i++){
			if(numero[i]!='0' && numero[i]!='1' && numero[i] !='b'){
				resp=2;
			}//Fin del if 
		}//Fin del for
		if(resp==1){
			lista_numeros.push_back(numero);
		}
		else{
			cout<<"El numero no es binario"<<endl;
		}
	}//Fin del if de los numeros binarios
	
	if (hexadecimal==0){
		for (int i = 0; i < numero.size(); i++){
			if(numero[i]!='0' && numero[i]!='1' 
				&& numero[i] !='2' && numero[i]!='3' 
				&& numero[i]!='4' && numero[i] !='5'
				&& numero[i]!='6' && numero[i]!='7' 
				&& numero[i] !='8' && numero[i]!='9' 
				&& numero[i]!='A' && numero[i] !='B' 
				&& numero[i]!='C' && numero[i]!='D' 
				&& numero[i] !='E' && numero[i]!='F'){

				resp=2;
			}//Fin del if
		
		}//Fin del for
		if(resp==1){
			lista_numeros.push_back(numero);
		}
		else{
			cout<<"El numero no es hexadecimal"<<endl;
		}
	}//Fin del if de los numeros binarios

	if (octal==0){
		for (int i = 0; i < numero.size(); i++){
			if(numero[i]!='0' && numero[i]!='1' 
				&& numero[i] !='2' && numero[i]!='3' 
				&& numero[i]!='4' && numero[i] !='5' 
				&& numero[i]!='6' && numero[i]!='7'){
				resp=2;
			}//Fin del if
		}//Fin del for 
		if(resp==1){
			lista_numeros.push_back(numero);
		}//Fin del if de los octales
		else{
			cout<<"El numero no es octal"<<endl;
		}
	}else{
		for (int i = 0; i < numero.size(); i++){
			if(numero[i]!='0' && numero[i]!='1' 
				&& numero[i] !='2' && numero[i]!='3' 
				&& numero[i]!='4' && numero[i] !='5' 
				&& numero[i]!='6' && numero[i]!='7' 
				&& numero[i]!='8' && numero[i]!='9'){
				resp=2;
			
			}//Fin del if
		}//Fin del for

		if(resp==1){
			lista_numeros.push_back(numero);
		}else{
			cout<<"El numero no es decimal"<<endl;
		}
	}
}//Fin del metodo para validar el numero

void Listar(){
	if (!lista_numeros.empty()){
		for (int i = 0; i < lista_numeros.size(); i++){			
			cout<<"Posicion "<<i<<": "<<lista_numeros[i]<<endl;
		}
	}else{
		cout<<"El vector esta vacio"<<endl;
	}//Fin del if que valida que el vector no este vacio
}//Fin del metodo para listar

void operar(){
  listar();
  int num1, num2, opcion;
  do{
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
  }while( num1 < 0 || num1 > numeros.size() || num2 < 0 || num2 > numeros.size() );
  char verificar = tipo( numeros[num1] );
  switch( verificar ){
    case 'b':{
              Binario baux( numeros[num1] );
              n1 = baux;
              n1.tipo = 'b';
              cout << "Tipo: " << n1.tipo << " Valo: " << n1.entero << endl;
              break;
    }
    case 'o':{
              Octal oaux( numeros[num1] );
              n1 = oaux;
              n1.tipo = 'o';
              cout << "Tipo: " << n1.tipo << " Valo: " << n1.entero << endl;
              break;
    }
    case 'h':{
            Hexadecimal haux( numeros[num1] );
            n1 = haux;
            n1.tipo = 'h';
            cout << "Tipo: " << n1.tipo << " Valo: " << n1.entero << endl;
            break;
    }
    case 'e':{
           n1.entero = stoi(numeros[num1], nullptr, 10);
            break;
    }
  }
  char verificar2 = tipo( numeros[num2] );
  switch( verificar2 ){
    case 'b':{
              Binario baux( numeros[num2] );
              n2 = baux;
              break;
    }
    case 'o':{
              Octal oaux( numeros[num2] );
              n2 = oaux;
              break;
    }
    case 'h':{
            Hexadecimal haux( numeros[num2] );
            n2 = haux;
            break;
    }case 'e':{
            n2.entero = stoi(numeros[num2], nullptr, 10);
            break;
    }

  }
  cout << "1- Sumar" << endl << "2- Restar" << endl << "3- Multiplicar" << endl << "Ingrese la opcion: ";
  cin >> opcion;
  if( opcion == 1 ) suma();
  if( opcion == 2 ) resta();
  if( opcion == 3 ) multiplicacion();
}

void suma(){
  int s = n1 + n2;
  cout << "Resultado: " << formato(s) << endl;
}

void resta(){
  int r = n1 - n2;
  cout << "Resultado: " << formato(r) << endl;
}

void multiplicacion(){
  int m =  n1 * n2;
  cout << "Resultado: " << formato(m) << endl;
}

string formato( int resultado ){
  string formato = to_string(resultado);
  switch( n1.tipo ){
    case 'b':{
                int bin = binary( resultado );
                formato = to_string(bin);
                formato += "b";
            }
            break;
    case 'e':{
                formato = to_string( stoi( formato , nullptr, 10) );
            }
            break;
    case 'o':{
                formato = "0c";
                formato += to_string( octales( resultado ));
            }
            break;
    case 'h':{
              formato = hexa( resultado );
              break;
            }

  }
  return formato;
}

int binary(int numero){
  int exponente, digito;
  double binario;
  exponente = 0;
  binario = 0;
  while( numero / 2 != 0 ){
          digito = numero % 2;
          binario = binario + digito * pow(10.0,exponente);
          exponente++;
          numero=numero/2;
  }
  binario = binario + numero * pow(10.0,exponente );
   return binario;
}

int octales( int numero ){
    int aux, aux2 = 1, octal = 0;
    while( numero != 0 ) {
        aux = numero % 8;
        numero /= 8;
        octal += aux * aux2;
        aux2 *= 10;
    }
    return octal;
}

string hexa( int numero ){
  string acum= "";
  char letras[100];
  char letra;
  int i = 0;
  while( numero !=0){
      int temp  = 0;
      temp = numero % 16;
      if( temp < 10 ){
          letra = temp + 48;
          acum += letra;
          i++;
      }
      else{
          letra = temp + 55;
          acum += letra;
          i++;
      }
      numero /= 16;
  }
  string aux = "";
  for ( int j = i-1; j >= 0 ;j-- )
      aux += acum[j];
  return aux;
}

char tipo( string num ){
  if( num[num.size()-1] == 'b' ){
    return  'b';
  }else if( num[0] == '0' && num[1] == 'c' ){
    return  'o';
  }else if( num[0] == '0' && num[1] == 'x' ){
    return  'h';
  }else{
    return 'e';
  }
}