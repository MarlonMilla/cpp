#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;
    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expreso" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
            case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
            case 2:
            agregarProducto("1 Expreso - L 30.00", 1, 30);
            break;

            default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl; 
        system("pause");
       
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Agua" << endl;
        cout << "2 - Jugo" << endl;
        cout << "3 - Fresco" << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
            case 1:
            agregarProducto("1 Agua - L 18.00", 1, 18);
            break;
            case 2:
            agregarProducto("1 Jugo - L 20.00", 1, 20);
            break;
            case 3:
            agregarProducto("1 Fresco - L 23.00", 1, 23);
            break;

            default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl; 
        system("pause");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Pastel" << endl;
        cout << "2 - Budin" << endl;
        cout << "3 - Tarta" << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
            case 1:
            agregarProducto("1 Pastel - L 50.00", 1, 50);
            break;
            case 2:
            agregarProducto("1 Budin - L 65.00", 1, 65);
            break;
            case 3:
            agregarProducto("1 Tarta - L 45.00", 1, 45);
            break;

            default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl; 
        system("pause");
        break;
    }
    default:
        break;
    }
}