#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int f=5;
	int c=5;
	int suma=0, num;
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    int n11,n12,n13,n14,n15,n16,n17,n18,n19,n20;
    int n21,n22,n23,n24,n25;
    
    srand(time(0));
	n1 = rand()%(9)+1;
	n2 = rand()%(9)+1;
	n3 = rand()%(9)+1;
	n4 = rand()%(9)+1;
	n5 = rand()%(9)+1;
	n6 = rand()%(9)+1;
	n7 = rand()%(9)+1;
	n8 = rand()%(9)+1;
	n9 = rand()%(9)+1;
	n10 = rand()%(9)+1;
	n11 = rand()%(9)+1;
	n12 = rand()%(9)+1;
	n13 = rand()%(9)+1;
	n14 = rand()%(9)+1;
	n15 = rand()%(9)+1;
	n16 = rand()%(9)+1;
	n17 = rand()%(9)+1;
	n18 = rand()%(9)+1;
	n19 = rand()%(9)+1;
	n20 = rand()%(9)+1;
	n21 = rand()%(9)+1;
	n22 = rand()%(9)+1;
	n23 = rand()%(9)+1;
	n24 = rand()%(9)+1;
	n25 = rand()%(9)+1;
	
      int valor[f][c] =
      {
        {n1, n2, n3, n4, n5},
        {n6, n7, n8, n9, n10},
        {n11, n12, n13, n14, n15},
        {n16, n17, n18, n19, n20},
        {n21, n22, n23, n24, n25}
       };
   

  for (int i = 0; i < f; i++)
    {
      for (int j = 0; j < c; j++)
      {
        cout << valor[i][j] << " ";
        suma+= valor[i][j];
        }
        cout <<endl;
    }
    cout <<endl;
	cout<<"La suma bidimensional es: "<<suma<<endl;
    
    return 0;
}