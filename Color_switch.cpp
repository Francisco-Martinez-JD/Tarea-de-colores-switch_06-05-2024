#include <iostream>
using namespace std;
int main()
{
char color;
cout<< "ingrese una letra\n";

cin>> color;
switch (color)
{
    case 'R':
    cout<< "Rojo\n";
    break;

    case 'Y':
    cout<< "Amarillo\n";
    break;
    
    case 'B':
    cout<< "Azul\n";
    break;

    case 'W':
    cout<< "Blanco\n";
    break;

    case 'K':
    cout<< "Negro\n";
    break;

    case 'C':
    cout<< "Cian\n";
    break;

    case 'G':
    cout<< "Verde\n";
    break;

    default: cout<< "Ingrese una letra valida\n";
    
}




return 0;
}