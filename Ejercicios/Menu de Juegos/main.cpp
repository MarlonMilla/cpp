#include <iostream>
#include "menu.h"
#include "tresEnRaya.h"
#include "pong.h"
#include "ahorcado.h"
#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    menu();
    int opcion;
    switch (opcion)
	{
    case 1:
    	tresEnRaya();
    	case 2:
    		pong();
    		case 3:
    			ahorcado();
    			case 0:
    				break;
    }
    
    return 0;
}