#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        numero = rand() % 10 + 1;
        cout << "primer numero al azar: " << numero << endl;

    }

    return 0;
}
