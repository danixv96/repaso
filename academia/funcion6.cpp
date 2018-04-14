#include <stdio.h>
#include <stdlib.h>

int Perimetro(int lado){

    int perimetro=0;

    printf("Lado: ");
    scanf("%d", &lado);

    perimetro = lado * 4;

    printf("Perimetro: %d\n", perimetro);

    return perimetro;
}

int main(){

    int l;

    Perimetro(l);

    return EXIT_SUCCESS;
}
