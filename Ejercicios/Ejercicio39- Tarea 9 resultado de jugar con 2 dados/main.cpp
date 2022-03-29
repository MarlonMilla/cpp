#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int dado1,dado2;
    int lanzar;

    while (true == 1)
    {
        cout << endl;
        cout << "---Resultados de jugar con dos dados---"<< endl;
        cout << "Presione 1 para lanzar "<< endl;
        cout << "Presione 2 para Salir "<< endl;
        cin >> lanzar;
        
        
        switch (lanzar)
        {
        case 1:
        {
            	system ("cls");
        for (int i=0;i<=1;i++)
        {
            srand (time (0));
            dado1 = rand()%(6)+1;
            dado2 = rand()%(6)+1; 
        }
        cout << "Dado (1) = " << dado1 << endl;
        cout << "Dado (2) = " << dado2 << endl;
        cout << "La suma de los dados es: ["<<dado1+dado2<<"]"<<endl;
        
        cout<<"--- Vuelve a lanzar ---"<<endl;
        system("pause");
        system ("cls");
        }
        default:
            break;
        }
        if (lanzar == 2)
        {
        break;
        }
    }   
}
