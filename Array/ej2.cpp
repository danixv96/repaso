#include <stdio.h>
#include <stdlib.h>

int main(){

    float r[5];

    printf("num 1: ");
    scanf("%f", &r[0]);

    printf("num 2: ");
    scanf("%f", &r[1]);

    printf("num 3: ");
    scanf("%f", &r[2]);
    
    printf("num 4: ");
    scanf("%f", &r[3]);
   
    printf("num 5: ");
    scanf("%f", &r[4]);

    printf("la lista desordenada\n");

    printf("%.2f, %.2f, %.2f, %.2f, %.2f\n", r[4], r[3], r[2], r[1], r[0]);

    return EXIT_SUCCESS;
}
