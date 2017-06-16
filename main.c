/*
--TP00 – 2017

--Un escáner elemental

--Grupo 03

--Integrantes del Grupo:
----Quispe Miguel - 1534518
----Apellido y Nombre - Legajo
----Apellido y Nombre - Legajo
----Apellido y Nombre - Legajo
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
