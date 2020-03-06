#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <string.h>
#include <ctype.h>
#include "Numero.h"

using namespace std;
vector<Numero *>lista;
Numero *n;

int menu(){

	int opcion;

	cout<<"1. Ingresar un numero"<<endl;
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
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<endl;

	return opcion;

}//Fin del menu de las opciones

void multiplicacion(Numero * ,Numero * );
void suma(Numero *, Numero *);
void resta(Numero *,Numero *);

int main(){	

	int usuario=1;
	
	while(usuario==1){
		
		switch(menu()){

			case 1:{

				string numero;
				string aux="";
				int cont=0;

				cout<<"Ingrese un numero: ";
				cin>>numero;
 				//pop_back;
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

					for (int i = 0; i < numero.size(); i++){
						if (isalpha(numero[i])) {
    						cont++;
  						} else {
    						aux+=numero[i];
  						}//Fin del if del numero
					}//Fin del for

					if(cont>0){
						cout<<"El decimal no puede contener letras"<<endl;
					} else{
						n=new Numero("decimal",aux);
						lista.push_back(n);
					}//Auxiliar para determinar que el decimal solo contenga numeros
				}//Valida que tipo de numero es
			
			break;}//Fin del caso 1 del menu principal
			
			case 2:{

				cout<<"Los numeros Registrados hasta el momento"<<endl;
				for (int i = 0; i < lista.size(); i++){
					cout<<"Posicion: "<<i<<lista[i]->toString();
					cout<<endl;
				}//Fin del for de impresion

			break;}//Fin del case dos del menu principal
			
			case 3:{
				
				switch(menu_operaciones()){
					
					case 1:{
						
						int posicion1;
						int posicion2;
						Numero *numero1;
						Numero *numero2;

						cout<<"Ingrese la primera posicion: ";
						cin>>posicion1;
						cout<<"Ingrese la segunda posicion: ";
						cin>>posicion2;

						numero1=lista[posicion1];
						numero2=lista[posicion2];

						suma(numero1,numero2);
						delete numero1;
						delete numero2;

					break;}

					case 2:{

						int posicion1;
						int posicion2;
						Numero *numero1;
						Numero *numero2;

						cout<<"Ingrese la primera posicion: ";
						cin>>posicion1;
						cout<<"Ingrese la segunda posicion: ";
						cin>>posicion2;

						numero1=lista[posicion1];
						numero2=lista[posicion2];

						resta(numero1,numero2);
						delete numero1;
						delete numero2;

					break;}

						int posicion1;
						int posicion2;
						Numero *numero1;
						Numero *numero2;

						cout<<"Ingrese la primera posicion: ";
						cin>>posicion1;
						cout<<"Ingrese la segunda posicion: ";
						cin>>posicion2;

						numero1=lista[posicion1];
						numero2=lista[posicion2];

						multiplicacion(numero1,numero2);
						delete numero1;
						delete numero2;

					case 3:{

						int posicion1;
						int posicion2;
						Numero *numero1;
						Numero *numero2;

						cout<<"Ingrese la primera posicion: ";
						cin>>posicion1;
						cout<<"Ingrese la segunda posicion: ";
						cin>>posicion2;

						numero1=lista[posicion1];
						numero2=lista[posicion2];

						multiplicacion(numero1,numero2);
						delete numero1;
						delete numero2;

					break;}

					default:
						cout<<"Opcion no valida"<<endl;
					break;	
				
				}//Fin del swtich de las opciones de los numeros

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

void suma(Numero * numero1, Numero *numero2){

	if(numero1->getTipo()=="decimal"&&numero2->getTipo()=="decimal"){
		
		int num1 = stoi(numero1->getNumero());
		int num2 = stoi(numero2->getNumero()); 
		int suma=num1+num2;
		cout<<"Resultado de la suma de: "<<suma<<endl<<endl;
		n=new Numero("decimal",""+suma);
		lista.push_back(n);
		delete n;
	
	}/*else if(){

	}else if(){

	}else if(){

	}*/

}//Fin del metodo de la suma 

void resta(Numero * numero1, Numero *numero2){

	if(numero1->getTipo()=="decimal"&&numero2->getTipo()=="decimal"){
		
		int num1 = stoi(numero1->getNumero());
		int num2 = stoi(numero2->getNumero()); 
		int rest=num1-num2;
		cout<<"Resultado de la resta de: "<<rest<<endl<<endl;
		n=new Numero("decimal",""+rest);
		lista.push_back(n);
		delete n;
	
	}else if(numero1->getTipo()=="decimal"&&numero2->getTipo()=="octal"){

	}else if(numero1->getTipo()=="decimal"&&numero2->getTipo()=="hexadecimal"){

	}else if(numero1->getTipo()=="decimal"&&numero2->getTipo()=="binario"){

	}

}//Fin del metodo de la resta 

void multiplicacion(Numero * numero1, Numero *numero2){

	if(numero1->getTipo()=="decimal"&&numero2->getTipo()=="decimal"){
		
		int num1 = stoi(numero1->getNumero());
		int num2 = stoi(numero2->getNumero()); 
		int mult=num1*num2;
		cout<<"Resultado de la multiplicacion de: "<<mult<<endl<<endl;
		n=new Numero("decimal",""+mult);
		lista.push_back(n);
		delete n;
	
	}/*else if(){

	}else if(){

	}else if(){

	}*/

}//Fin del metodo de la multiplicacion 