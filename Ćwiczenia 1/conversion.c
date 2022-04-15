#include <stdio.h>
#include "conversion.h"


void decimalToBinary(unsigned int number){
    
    int wholeNumber = 0;

    int multiplier  = 1;
    // mulitplayer jest po to aby ułozyc pozycje liczby w wholenumber
    int binar;

    while(number != 0){
    //wykonywac do momentu gdy zmienna nie jest rowna 0
      
        binar = number%2;
        // liczenie reszty(moze byc tylko jeden lub zero)

        number = number/2;
        // dzielenie liczby przez poł zeby poxniej znowu powtorzyc w kolejnej pentli z binarnNumber = number%2


        wholeNumber = wholeNumber + (binar * multiplier );

        // za pierwszym razem gdy wholeNumber jest 0 to po prostu dodaje liczbe binarna do tego. W nastepnej pentli do wartosci z poprzedniej pentli dodaje nowa liczbe binarna
        
        multiplier  = multiplier *10;
        // za pierwwszym razem :1*10 za drugim juz 10*10 itd
        

    }

    printf("%d", wholeNumber);
    //pokazuje cala zmienna 

};


