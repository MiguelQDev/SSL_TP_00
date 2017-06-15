#include <stdio.h>
#include "scanner.h"

int main()
{
    char cadena [500];
    printf ("Introduzca una cadena: ");
    fgets (cadena, 500, stdin);
    //printf ("Splitting string \"%s\" into tokens:\n",cadena);
    scanner(cadena);

    return 0;

}
