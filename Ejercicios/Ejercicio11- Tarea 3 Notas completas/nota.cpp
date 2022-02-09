#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota > 100 || nota <0 ){
        cout << "Ingrese una nota entre 0 - 100";
        return 0;
    }
    if (nota >= 96 && nota <= 100){
        cout << "obtuvo una A++";
    }
    if (nota >= 90 && nota <= 95){
        cout << "obtuvo una A+";
    }
    if (nota >= 86 && nota <= 90){
        cout << "obtuvo una A";
    }
    if (nota >= 80 && nota <= 85){
        cout << "obtuvo una A-";
    }
    if (nota >= 76 && nota <= 80){
        cout << "obtuvo una B+";
    }
    if (nota >= 70 && nota <= 75){
        cout << "obtuvo una B";
    }
    if (nota >= 66 && nota <= 70){
        cout << "obtuvo una B-";
    }
    if (nota >= 60 && nota <= 65){
        cout << "obtuvo una C+";
    }
    if (nota >= 56 && nota <= 60){
        cout << "obtuvo una C";
    }
    if (nota >= 50 && nota <= 55){
        cout << "obtuvo una C-";
    }
    if (nota >= 46 && nota <= 50){
        cout << "obtuvo una D+";
    }
    if (nota >= 40 && nota <= 45){
        cout << "obtuvo una D";
    }
    if (nota >= 36 && nota <= 40){
        cout << "obtuvo una D-";
    }
    if (nota >= 30 && nota <= 35){
        cout << "obtuvo una E+";
    }
    if (nota >= 26 && nota <= 30){
        cout << "obtuvo una E";
    }
    if (nota >= 20 && nota <= 25){
        cout << "obtuvo una E-";
    }
    if (nota >= 16 && nota <= 20){
        cout << "obtuvo una F+";
    }
    if (nota >= 10 && nota <= 15){
        cout << "obtuvo una F";
    }
    if (nota >= 6 && nota <= 10){
        cout << "obtuvo una F";
    }
    if (nota >= 4 && nota <= 5){
        cout << "obtuvo una F-";
    }
    if (nota >= 0 && nota <= 3){
        cout << "obtuvo una F--";
    }

    return 0;
}
