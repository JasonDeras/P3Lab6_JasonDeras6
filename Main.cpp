#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "Numero.h"

using namespace std;
vector<Numero *>lista;
Numero *n;

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

int menu_operaciones(){
	
	int opcion;

	cout<<"1. Suma"<<endl;
	cout<<"2. Resta "<<endl;
	cout<<"3. Multiplicacion"<<endl;
	cout<<"Ingrese una opcion": ;
	cin>>opcion;
	cout<<endl;
	return opcion;

}//Fin del menu de las opciones

int main(void){	

	int usuario=1;
	
	while(usuario==1){
		
		switch(menu()){

			case 1:{

				string numero;
				cout<<"Ingrese un numero: ";
				cin>>numero;
 	
 				if (numero.find("b") != std::string::npos) {
 					n=new Numero("binario",numero);
    				lista.push_back(n);

				}else if (numero.find("0c") != std::string::npos) {
				n=new Numero("octaal",numero);
    				lista.push_back(n);
    			}else if (numero.find("0x") != std::string::npos) {
    				n=new Numero("hexadecimal",numero);
    				lista.push_back(n);
				}else{
					n=new Numero("decimal",numero);
    				lista.push_back(n);
				}//Valida que tipo de numero es
			
			break;}//Fin del caso 1 del menu principal
			
			case 2:{

				cout<<"Los numeros Registrados hasta el momento"<<endl;
				for (int i = 0; i < lista.size(); i++){

					cout<<lista[i]->toString();
					cout<<endl;
				}//Fin del for de impresion

			break;}//Fin del case dos del menu principal
			
			case 3:{
				
				swtich(menu_operaciones){
					
					case 1:{
					break;}

					case 2:{
					break;}

					case 3:{
					break;}

					default:
						cout<<"Opcion no valida"<<endl;
					break;	
				
				}//Fin del swtich de las opciones del 
			break;}//Fin del case tres del menu principal

			default:{
				cout<<"Opcion no valida"<<endl; 
			break;}
		
		}//Fin del swicth del menu principal
		cout<<"Volver al menu[1.-Si/2.-No]: ";
		cin>>usuario;
		cout<<endl;
	}//Fin del while del usuario
 		
 		//Liberacion de memoria
 		for (int i = 0; i < lista.size(); i++){
 			delete lista[i];
 			lista[i]=NULL;
 		}
 		lista.clear();

 		delete n;
	return 0;

}//Fin del main