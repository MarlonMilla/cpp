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
		void tresEnRaya();
	}
	if(opcion==2){
		void ahorcado();
	}
	if(opcion==3){
		void pong();
	}
	
	return 0;
}
