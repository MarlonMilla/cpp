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
	cout <<"0_ Salir"<<endl;
	cout << endl;
    
	cout << "Ingrese una opcion: ";
    cin >> opcion;
	
	switch (opcion){
		case 1:
		system("cls");
		armarTablero();
		case 2:
		system("cls");
		void empezarJuego (char palabras[][15], char nombre[]);
		case 3:
		system("cls");
		PingPong();
		case 0:
		break;
		default: 
		break;
	}
	
	
	return 0;
}
