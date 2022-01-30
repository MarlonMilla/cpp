#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	// Datos de entrada
	int a = 0;
	int b = 0;
	int Suma = 0,Resta = 0,Multiplicacion = 0,Division= 0;
	
	cout<<"Ingrese el valor de a:";
	cin>>a;
	cout<<endl;
	
	cout<<"Ingrese el valor de b:";
	cin>>b;
	cout<<endl;
	
	// Proceso
	Suma = a+b;
	Resta = a-b;
	Multiplicacion = a*b;
	Division = a/b;
	
	// Salida
	cout<<"La suma de a+b es: "<<Suma<<endl;
	cout<<"La Resta de a-b es: "<<Resta<<endl;
	cout<<"La Multiplicacion de a*b es: "<<Multiplicacion<<endl;
	cout<<"La division de a/b es: "<<Division<<endl;
	return 0;
}
