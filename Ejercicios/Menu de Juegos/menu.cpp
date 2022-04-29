#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "Ahorcado.h"
#include "TresEnRaya.h"
#include "PingPong.h"

using namespace std;


int main(int argc, char** argv) {
	int a=0, opcion=0;
	system("color 02");
	cout <<"-------------------------------------------"<<endl;
	cout <<"| ***** ***** ******** *****  ** **    ** |"<<endl;
	cout <<"| ** ** ** ** **       ** **  ** **    ** |"<<endl;
	cout <<"| **  ***  ** ******** **  ** ** **    ** |"<<endl;
	cout <<"| **  ***  ** **       **   * ** **    ** |"<<endl;
	cout <<"| **   *   ** ******** **    *** ******** |"<<endl;
	cout <<"-------------------------------------------"<<endl;
	cout <<"-----JUEGOS------"<<endl;
	cout <<"1_ Tres en Raya"<<endl;
	cout <<"2_ Ahorcado"<<endl;
	cout <<"3_ Ping Pong"<<endl;
	cout << endl;
    
	cout << "Ingrese una opcion: ";
    cin >> opcion;
	
	if(opcion==1){
		cout<<"hola bienvenido";
		TresEnRaya();
	}
	if(opcion==2){
		cout<<"sigues aqui?";
		Ahorcado();
	}
	if(opcion==3){
		cout<<"pense que ya te habias idos";
		PingPong();
	}
	
	return 0;
}
