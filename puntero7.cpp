#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void Carga(int vec[TAM]){
    int i;

    for(i=0; i<TAM; i++){
        printf("valor: ");
        scanf("%i", &vec[i]);
    }
}

void Imprime(int vec[TAM]){
    int i;

    printf("\tContenido del vector\n");

    for(i=0; i<TAM; i++)
        printf(" %i\n", vec[i]);
}

void MayorMenor(int vec[TAM], int *pmayor, int *pmenor){

    /*Falta algo aqui...*/
}

int main(){

    int vec[TAM];

    Carga(vec);
    Imprime(vec);

    return EXIT_SUCCESS;
}
