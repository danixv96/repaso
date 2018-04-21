#include <stdio.h>
#include <stdlib.h>

#define TAM 4

void Carga(int vec[TAM]){
    int i;

    for(i=0; i<TAM; i++){
	printf("numero: ");
    	scanf("%i", &vec[i]);
    }
}

void Muestra(int vec[TAM]){
    int i;

    for(i=0; i<TAM; i++)
	printf(" %i\n", vec[i]);
}


int main(){

    int vector[TAM];

    Carga(vector);
    Muestra(vector);

    return EXIT_SUCCESS;
}
