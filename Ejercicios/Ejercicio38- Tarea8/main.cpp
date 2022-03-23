#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0, raizCuadrada = 0;
    cout << "Ingrese un numero al que se le va sacar la raiz: ";
    cin >> numero;

    raizCuadrada = sqrt(numero);
    cout << "Raiz cuadrada de " << numero << " es: " <<raizCuadrada;

    return 0;
}
