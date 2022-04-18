#include <iostream>
#include "tresEnRaya.h"
#include "pong.h"
#include "menu.h"
#include "ahorcado.h"

using namespace std;

void menu()
{
    int opcion = 0;

    while(true)
    {
        system("cls");

        cout << "****";
        cout << "MENU";
        cout << "****";
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "1 - Tres En Raya" << endl;
        cout << "2 - Ahorcado" << endl;
        cout << "3 - Ping Pong" << endl;
        cout << "0 - Salir" << endl;

        cout << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }
    }
    
}