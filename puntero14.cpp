#include <stdio.h>
#include <stdlib.h>

void Carga(int *pe){
    int i;

    for(i=0; i<5; i++){
        printf("valor: ");
        scanf("%i", &*pe);
        pe++;
    }
}

void Imprimir(int *pe){
    int i;

    for(i=0; i<5; i++){
        printf("%i\n", *pe);
        pe++;
    }
}

int main(){

    int matriz[5];

    Carga(matriz);
    Imprimir(matriz);

    return EXIT_SUCCESS;
}
