#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "scanner.h"
#include <stddef.h>
#include <stdbool.h>
void scanner(char cadena [500])
{
    char * pch;
    //printf ("cadena\n %s ", cadena );
    pch = strtok (cadena," ");   // Aqui deja solo la coma
    //printf ("\n%s", pch );
    while (pch != NULL)
    {
        //printf ("\n%s\n",pch);     // Aqui deberias guardar tu dato en el array!
        bool num = false;
        bool letterMin = false;
        bool firstCharIsLetter = false;
        bool onlyLetter = false;
        int actual;
        int anterior;
        //1 digito minuscula
        //2 constante entera
        //3 mayusculas u otros caracteres
        bool flag = false;
        char *p = pch;
        while ( *p != '\0' && *p != '\n') {

            //printf ("\n%c ", *p  );

            if( isalpha(*p) )
            {
                if(*p >= 'a' && *p <= 'z')
                {
                    actual = 1;

                }
                else
                {
                    actual = 3;
                }
            }
            else if( isdigit(*p) )
            {
                actual = 2;
            }
            else
            {
                actual = 3;
            }


            if(flag && firstCharIsLetter && ((actual == 1 || actual == 2)) ){
                letterMin = true;
            }else if(flag && firstCharIsLetter && letterMin && actual == 3){
                letterMin = false;
                break;
            }

            if(flag && !letterMin && !firstCharIsLetter){
                if(anterior == 2 && actual == 2)
                {
                    num = true;
                }else if(anterior == 2 && actual != 2){
                    num = false;
                    break;
                }
            }


            if(actual == 1 && !flag){
                firstCharIsLetter = true;
            }
            if(firstCharIsLetter && !flag){
                onlyLetter = true;
            }
            if(flag){
                onlyLetter = false;
            }
            anterior = actual;
            flag = true;
            p++ ; // move p to point to next position

        }
            if(letterMin){
                printf("\n Identificador ");
            }else if(onlyLetter){
                printf("\n Identificador ");
            }else if(num){
                printf("\n constante entera ");
            }else{
                printf("\n error ");
            }



        pch = strtok (NULL, " ");  // Aca tambien iria solo la coma.!!
    }

}
