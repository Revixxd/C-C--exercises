#include <stdio.h>
#include <ctype.h>
#include "convertCase.h"

void convertCase(char text[]){

    int i = 0;
    while (text[i]){

    if (isalpha(text[i])){

        if(islower(text[i])){
            printf( "na większą litere('%c') = '%c';\n", text[i], toupper( text[i] ) );
        }else{
            printf( "na mniejsza litere('%c') = '%c';\n", text[i], tolower( text[i] ) );
        }
        
    } else printf ("('%c') nie jest literą alfabetu!\n", text[i] );
    i++;

  }

}