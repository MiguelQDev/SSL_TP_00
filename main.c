/*
--TP00 – 2017

--Un escáner elemental

--Grupo 03

--Integrantes del Grupo:
----Albor Lucas         - 1560116
----Hwang Marcos        - 1533083
----Nahuel de Campos    - 1199900
----Quispe Miguel       - 1534518
*/


#include <stdio.h>
#include "scanner.h"

int main()
{
    char cadena [500];
    printf ("Ingrese las cadenas: ");
    fgets (cadena, 500, stdin);
    scanner(cadena);
    return 0;
}
