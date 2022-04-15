#include <stdio.h>
#include <ctype.h>
#include "convertCase.h"

int main(){
    char text[20]={};

    scanf("%s", text);

    convertCase(text);
    
    return 0;
}

