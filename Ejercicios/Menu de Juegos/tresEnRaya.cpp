#include <iostream>
#include <stdio.h>
#include "tresEnRaya.h"



int ganador (char c[3][3]);

void tresEnRaya(){
    int opcion=0;
}

	int main () {
	    char c[3][3];
	    
	    loop (c);
	    
	    return 0;
	}

	
	void loop (char c[3][3]){
	    int i, j;
	    
	    i = 0;
	    Intro_Primera (c); 
	    tablero (c); 
	    
	    do {
	        system ("cls");
	        tablero (c);
	        if (i % 2 == 0) {
	            Intro_Yo (c);
	        } else {
	            Intro_Otro (c);
	        }
	        j = ganador (c);
	        i++;
	        
	    } while (i <= 9 && j == 2);
	    
	    if (j == 0) {
	        printf ("ENHORABUENA!!! JUGADOR 1 ha ganado :P \n\n");
	    } else if (j == 1) {
	        printf ("ENHORABUENA!!! JUGADOR 2 ha ganado :P \n\n");
	    } else {
	        printf ("OPS! No ha ganado nadie, tocará volver a jugar. \n\n");
	    }
	}
	
	
	void Intro_Primera (char c[3][3]) {
	    char aux;
	    aux = '1';
	    
	    for(int i=0; i<3; i++){
	        for(int j=0; j<3; j++){
	            c[i][j] = aux++;
	        }
	    }
	}
	
	
	void Intro_Yo (char c[3][3]) {
	    char aux;
	    int i, j, k;
	    
	    do {
	        do {
	            printf ("JUGADOR 1: "); 
	            scanf ("%c",&aux); 
	        } while (aux < '1' || aux > '9'); 
	        
	        k = 0;
	        
	        switch (aux) { 
	            case '1': {
	                i = 0; 
	                j = 0; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '2': {
	                i = 0; 
	                j = 1; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '3': {
	                i = 0; 
	                j = 2; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '4': {
	                i = 1; 
	                j = 0; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '5': {
	                i = 1; 
	                j = 1; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '6': {
	                i = 1; 
	                j = 2; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '7': {
	                i = 2; 
	                j = 0; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '8': {
	                i = 2; 
	                j = 1; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '9': {
	                i = 2; 
	                j = 2; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	        }
	    } while (k == 1); 
	    
	    c[i][j] = 'x';
	}
	
	
	void Intro_Otro (char c[3][3]) {
	    char aux;
	    int i, j, k;
	    
	    do {
	        do {
	            printf ("JUGADOR 2: "); 
	            //fflush (stdin);
	            scanf ("%c",&aux); 
	        } while (aux < '1' || aux > '9'); 
	        
	        k = 0;
	        
	        switch (aux) { 
	            case '1': {
	                i = 0; 
	                j = 0; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '2': {
	                i = 0; 
	                j = 1; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '3': {
	                i = 0; 
	                j = 2; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '4': {
	                i = 1; 
	                j = 0; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '5': {
	                i = 1; 
	                j = 1; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '6': {
	                i = 1; 
	                j = 2; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '7': {
	                i = 2; 
	                j = 0; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '8': {
	                i = 2; 
	                j = 1; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	            case '9': {
	                i = 2; 
	                j = 2; 
	                if (c[i][j] == 'x' || c[i][j] == 'o'){ 
	                    k = 1;
	                    printf ("La casilla está ocupada! Indica otra posicion distinta. \n\n");
	                }
	                break;
	            }
	        }
	    } while (k == 1); 
	    
	    c[i][j] = 'o';
	}
	
	
	void tablero (char c[3][3]) {
	    for(int i=0; i<3; i++){
	        for(int j=0; j<3; j++){
	            if (j<2){
	                printf (" %c |",c[i][j]);
	            } else {
	                printf (" %c ",c[i][j]);
	            }
	        }
	        if (i<2){
	            printf ("\n-----------\n");
	        }
	    }
	    printf ("\n\n");
	}
	
	
	int ganador (char c[3][3]) {
	    if (c[0][0] == 'x' || c[0][0] == 'o') {
	        if (c[0][0] == c[0][1] && c[0][0] == c[0][2]) {
	            if (c[0][0] == 'x') {
	                return 0; 
	            } else {
	                return 1; 
	            }
	        }
	        else if (c[0][0] == c[1][0] && c[0][0] == c[2][0]) {
	            if (c[0][0] == 'x') {
	                return 0; 
	            } else {
	                return 1; 
	            }
	        }
	    }
	    else if (c[1][1] == 'x' || c[1][1] == 'o') {
	        if (c[1][1] == c[0][0] && c[1][1] == c[2][2]) {
	            if (c[1][1] == 'x') {
	                return 0; 
	            } else {
	                return 1; 
	            }
	        }
	        else if (c[1][1] == c[1][0] && c[1][1] == c[1][2]) {
	            if (c[1][1] == 'x') {
	                return 0; 
	            } else {
	                return 1; 
	            }
	        }
	        else if (c[1][1] == c[2][0] && c[1][1] == c[0][2]) {
	            if (c[1][1] == 'x') {
	                return 0;
	            } else {
	                return 1;
	            }
	        }
	        else if (c[1][1] == c[0][1] && c[1][1] == c[2][1]) {
	            if (c[1][1] == 'x') {
	                return 0; 
	            } else {
	                return 1; 
	            }
	        }
	    }
	    else if (c[2][2] == 'x' || c[2][2] == 'o') {
	        if (c[2][2] == c[2][0] && c[2][2] == c[2][1]) {
	            if (c[2][2] == 'x') {
	                return 0; 
	            } else {
	                return 1; 
	            }
	        }
	        else if (c[2][2] == c[0][2] && c[2][2] == c[1][2]) {
	            if (c[2][2] == 'x') {
	                return 0; 
	            } else {
	                return 1; 
	            }
	        }
	    }
	    return 2;
	}
