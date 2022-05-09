
#include <stdio.h>
//for bool
#include <stdbool.h>
//for math (sqr)
#include <math.h>
#include "triangle.h"


bool function(Point_t points[]){

    //liczenie osobnie kazdej dlugusci
    double AB = sqrt(pow((points[2].x - points[1].x),2) + pow((points[2].y - points[1].y),2 )) ;

    double BC = sqrt(pow((points[3].x - points[2].x),2) + pow((points[3].y - points[2].y),2 ));

    double CD = sqrt(pow((points[3].x - points[1].x),2) + pow((points[3].y - points[1].y),2 ));

    // jezeli jakas dlugosc podenesioan do kwadratu jest rowna reszcie podniesionej do kwadraty to jest prostokatny
    if( pow(AB ,2) + pow(BC ,2) == pow(CD ,2) || pow(CD ,2) + pow(BC ,2) == pow(AB ,2) || pow(AB ,2) + pow(CD ,2) == pow(BC ,2)){
        return true;
    }else{
        return false;
    }


// if (points[] < 5){
//     return true;
// }else{
//     return false;
// }

// for(int i=1; i < 4; i++){

//     printf("Punkt: %d:", i);
//     printf(" X:%d", points[i].x);
//     printf(" Y:%d \n", points[i].y);
// }

}

int main(){

// inicjalizacja 4 struct
Point_t points[4];

//pentla aby do kazdego struct dawac wartosci x i y
for(int i=1; i < 4; i++){

    printf("podaj X dla punktu %i: ", i);
    scanf("%lf", &points[i].x);
    printf("podaj Y dla punktu %i: ", i);

    scanf("%lf", &points[i].y);

}

// wywolanie funckji 
if(function(points)){
    printf("Jest");
}else{
    printf("Nie jest");
};

    
return 0;

}



// Point_t points[4];

//     for(int i=1; i < 4; i++){

//                 printf("podaj X: ");
//                 scanf("%d", &points[i].x);
//                 printf("podaj Y: ");
//                 scanf("%d", &points[i].y);

//     }

// for(int i=1; i < 4; i++){

//     printf("Punkt: %d:", i);
//     printf(" X:%d", point[i].x);
//     printf(" Y:%d \n", point[i].y);
// }

