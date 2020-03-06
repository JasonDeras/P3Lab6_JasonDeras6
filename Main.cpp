#include <iostream>
#include <string>
#include<stdio.h>

using namespace std;

int menu(){

	int opcion;

	cout<<"1. Ingrsar un numero"<<endl;
	cout<<"2. Listar Numeros"<<endl;
	cout<<"3. Operacion"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<endl;
	return opcion;

}//Fin del menu
void listar_numeros();

int menu_operaciones(){
	
}

int main(void){	

	int r=1;
	while(r==1){

	}
 	string numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
 	
 	if (numero.find("b") != std::string::npos) {
    	cout<<"Binaro"<<endl;
	}else if (numero.find("0c") != std::string::npos) {
    	cout<<"Octal"<<endl;
	}else if (numero.find("0x") != std::string::npos) {
    	cout<<"Hexadecimal"<<endl;
	}else{
		cout<<"Decimal"<<endl;
	}//Valida que tipo de numero es
 
	return 0;
}