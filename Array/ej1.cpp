#include <stdio.h>
#include <stdlib.h>

int main(){

    float num[4];
    float media;

    printf("numero 1: ");
    scanf("%f",&num[0]);

    printf("numero 2: ");
    scanf("%f", &num[1]);

    printf("numero 3: ");
    scanf("%f", &num[2]);

    printf("numero 4: ");
    scanf("%f", &num[3]);

    media += (num[0] + num[1] + num[2] + num[3]) / 4;

    printf("la media es: %.2lf\n", media);

    return EXIT_SUCCESS;
}
