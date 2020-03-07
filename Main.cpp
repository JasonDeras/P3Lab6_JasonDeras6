
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
vector<string> lista_numeros;


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
int binario( int numero );

//Octales
int octales( int numero );

//Hexadecimales
string hexadecimal( int numero );

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
  			Listar();
  		break;}

  		case 3:{
  			Operareracion();
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
	size_t octal = numero.find("0c");

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
		}
	}
}//Fin del metodo para validar el numero

void Listar(){
	cout<<"\n\nListado de los numeros"<<endl;
	if (!lista_numeros.empty()){
		for (int i = 0; i < lista_numeros.size(); i++){			
			cout<<"Posicion "<<i<<": "<<lista_numeros[i]<<endl;
		}
	}else{
		cout<<"El vector esta vacio"<<endl;
	}//Fin del if que valida que el vector no este vacio
}//Fin del metodo para listar

void Operareracion(){
	Listar();
  int num1, num2, opcion;
  do{
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
  }while( num1 < 0 || num1 > lista_numeros.size() || num2 < 0 || num2 > lista_numeros.size() );
  char verificar = tipo( lista_numeros[num1] );
  switch( verificar ){
    case 'b':{
        Binario bi( lista_numeros[num1] );
        numero1 = bi;
        numero1.tipo = 'b';
    break;}
    
    case 'o':{
        Octal oct( lista_numeros[num1] );
        numero1 = oct;
        numero1.tipo = 'o';
    break;}

    case 'h':{
    	Hexadecimal hec( lista_numeros[num1] );
        numero1 = hec;
        numero1.tipo = 'h';
    break;}
    
    case 'e':{
        numero1.entero = stoi(lista_numeros[num1], nullptr, 10);
    break;}
  }//Fin del case 

  char verificar2 = tipo( lista_numeros[num2] );
  switch( verificar2 ){
    case 'b':{
              Binario bi( lista_numeros[num2] );
              numero2 = bi;
              break;
    }
    case 'o':{
              Octal oct( lista_numeros[num2] );
              numero2 = oct;
              break;
    }
    case 'h':{
            Hexadecimal hec( lista_numeros[num2] );
            numero2 = hec;
            break;
    }case 'e':{
            numero2.entero = stoi(lista_numeros[num2], nullptr, 10);
            break;
    }

  }
  cout<< "1- Sumar" << endl;
  cout<< "2- Restar" << endl;
  cout<< "3- Multiplicar" << endl;
  cout<< "Ingrese la opcion: ";
  cin >> opcion;
  switch(opcion){
  		case 1:
  			Suma();
  		break;
  		case 2:
  			Resta();
  		break;
  		case 3:
  			Multiplicacion();
  		break;
  		default:
  			cout<<"Opcion no valida"<<endl;
  		break;
  }//Fin del case de las operaciones
}

void Suma(){
  int s = numero1 + numero2;
  cout << "Resultado: " << Formato(s) << endl;
}

void Resta(){
  int r = numero1 - numero2;
  cout << "Resultado: " << Formato(r) << endl;
}

void Multiplicacion(){
  int m =  numero1 * numero2;
  cout << "Resultado: " << Formato(m) << endl;
}

string Formato( int resultado ){
  string formato = to_string(resultado);
  switch( numero1.tipo ){
    case 'b':{
                int bin = binario( resultado );
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
              formato = "0x";
              formato += hexadecimal( resultado );
              break;
            }

  }
  return formato;
}

int binario(int numero){
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

string hexadecimal( int numero ){
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
}//Fin del metodo de tipo