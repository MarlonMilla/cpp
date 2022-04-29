#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "TresEnRaya.h"

using namespace std;

char tablero[3][3]; // ponemos char por que es una matriz de 3 x 3 y los caracteres que utilizaremos van a ser X o O
int turno=0;
string jugador1="";
string jugador2="";

void armarTablero(){
	int x=0,y=0;  //tenemos que poner un bucle en i de 3 y j de 3, por que es una matriz de 3x3
				//Estas son 	2 coordenadas Y la vertical y X la horizontal
	for(int i=0;i<6;i++){
		for(int j=0;j<3;j++){
			if(i<5 && i%2==1){
				cout<<"___";	
			}else{
				if(i<5){
					cout<< " " << tablero[x][y]<< " "; //Aqui invocamos el tablero de dichos caracteres
					y++;
				}else{
					cout<< "   ";
				}
			}
			if(j<2){
				cout<<"|";
			}
		}
		y=0;
		if(i%2==0){
			x++;
		}
		cout<<endl;
	}
}
	
char posiblesJugadas(){//funcion que van a indicarnos todas las jugadas que tendremos, en total serían 9
	cout<<endl<<"OPCIONES DE JUEGO: "<<endl<<endl;
	int contador=0;
	string opciones = "123456789";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<opciones[contador]<<".- ["<<i<<", "<<j<<"]  ";
			if(tablero[i][j] != '\0'){
				cout<<"OCUPADO";
			}
			cout<<endl;
			contador++;
		}
	}
	cout<<endl;
	if(turno % 2 == 0){
		cout<<jugador1;
	}else{
		cout<<jugador2;
	}
	
	cout<<", Elige una jugada: ";
	return getch();
}

void actualizarTurno(int x, int y){
	if(turno%2==0){
		tablero[x][y]='X';	
	}else{
		tablero[x][y]='O';
	}
	turno++;	
}

int verificarJugada(char jugada ){
	if(jugada>='1'&&jugada<='9'){
		switch(jugada){
			case '1':
				if(tablero[0][0]=='\0'){
					actualizarTurno(0, 0);
					return 1;
				}
				break;
			case '2':
				if(tablero[0][1]=='\0'){
					actualizarTurno(0, 1);
					return 1;
				}
				break;
			case '3':
				if(tablero[0][2]=='\0'){
					actualizarTurno(0, 2);
					return 1;
				}
				break;
			case '4':
				if(tablero[1][0]=='\0'){
					actualizarTurno(1, 0);
					return 1;
				}
				break;
			case '5':
				if(tablero[1][1]=='\0'){
					actualizarTurno(1, 1);
					return 1;
				}
				break;
			case '6':
				if(tablero[1][2]=='\0'){
					actualizarTurno(1, 2);
					return 1;
				}
				break;
			case '7':
				if(tablero[2][0]=='\0'){
					actualizarTurno(2, 0);
					return 1;
				}
				break;
			case '8':
				if(tablero[2][1]=='\0'){
					actualizarTurno(2, 1);
					return 1;
				}
				break;
			case '9':
				if(tablero[2][2]=='\0'){
					actualizarTurno(2, 2);
					return 1;
				}
				break;
		}
	}
	return 0;
}

int verificarGanador(){
	if(tablero[0][0] != '\0' && tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2]){
		return 1;
	}
	if(tablero[1][0] != '\0' && tablero[1][0] == tablero[1][1] && tablero[1][0] == tablero[1][2]){
		return 1;
	}
	if(tablero[2][0] != '\0' && tablero[2][0] == tablero[2][1] && tablero[2][0] == tablero[2][2]){
		return 1;
	}
	if(tablero[0][0] != '\0' && tablero[0][0] == tablero[1][0] && tablero[0][0] == tablero[2][0]){
		return 1;
	}
	if(tablero[0][1] != '\0' && tablero[0][1] == tablero[1][1] && tablero[0][1] == tablero[2][1]){
		return 1;
	}
	if(tablero[0][2] != '\0' && tablero[0][2] == tablero[1][3] && tablero[0][2] == tablero[2][2]){
		return 1;
	}
	if(tablero[0][0] != '\0' && tablero[0][0] == tablero[1][1] && tablero[0][0] == tablero[2][2]){
		return 1;
	}
	if(tablero[0][2] != '\0' && tablero[0][2] == tablero[1][1] && tablero[0][2] == tablero[2][0]){
		return 1;
	}
	return 0;
}

void identificarGanador(int turnoanterior){
	cout<<"FELICITACIONES!!!"<<endl;
	if(turnoanterior % 2 == 0){
		cout<<"El ganador es: "<<jugador1<<" [ X ] ";
	}else{
		cout<<"El ganador es: "<<jugador2<<" [ O ] ";
	}

}


void tresEnRaya() {
	int a, b;
	int numerodeTurnos=0;
	int banderaJugada= 0;
	int banderaGanador=0;
	do{
		cout<<endl;
		cout<<"                   BIENVENIDOS AL JUEGO 3 EN RAYA!!!!!"<<endl;
		cout<< "\n\n1- JUGAR \n"<<endl;
		cout<< "2- SALIR \n \n";
		cin >> a ;
		cout<< "\n \n \n";
		
		switch (a)
		{
			case 1:
				cout<<"Ingrese el nombre del jugador 1: ";
				cin>>jugador1;
	
				cout<<"Ingrese el nombre del jugador 2: ";
				cin>>jugador2;
	
				system("cls");
	
				while(numerodeTurnos<9 && banderaGanador == 0){
					system("cls");
				armarTablero();
				banderaJugada=verificarJugada(posiblesJugadas());
				if(banderaJugada==1){
					banderaGanador = verificarGanador();
					numerodeTurnos++;
					}	
				}
				cout<<endl;
				system("cls");
				armarTablero();
				if(banderaGanador==1){
					identificarGanador(numerodeTurnos-1);
				}else {
					cout<<"EL JUEGO TERMINO EN UN EMPATE";
				}
				return;
				break;
				
			case 2:
				cout<< "Seguro que quieres SALIR.....??   SI o NO \n"<<endl;
				cout<< "\n 1- SI"<<endl;
				cout<< "\n 2- NO \n\n";
				cin >> b;
				cout<< "\n \n";
				if (b == 1)
				{
					return;
				}
				else
				{
					tresEnRaya();
				}
				break;
			default:
				tresEnRaya();
				break;
		}
	}
	while(a != 3);
	system("pause");
	tresEnRaya();
}
