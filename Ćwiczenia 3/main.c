#include <stdio.h>
  
int main()
{
    FILE* fp;
  
    int count = 0;
  
    char nazwa[10];

    char c;

    printf("Wprowadz sciezke do pliku: ");
    scanf("%s", nazwa);

    fp = fopen(nazwa, "r");
  
    if (fp == NULL) {
        printf("Nie mozna było otworzyć pliku: %s",nazwa);
        return 0;
    }
    
    printf("Wprowadz cyfre do sprawdzenia do pliku: ");
    char liczba;
    scanf("%s", &liczba);
  
    // EOF znaczy koniec pliku
    //robić do momentu gdy sa pliki i pozwoli na to char
    for (c = getc(fp); c != EOF; c = getc(fp)){

        if(c == liczba){
            count = count + 1;
        }
        

    }
  
        
  
    // Close the file
    fclose(fp);
    // Print the count of characters
    printf("Plik %s ma %d liter %c",nazwa, count, liczba);
  
    return 0;
}