#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void Carga(float *p){
    int i;

    for(i=0; i<TAM; i++){
	printf("Numero: ");
	scanf("%f", &p[i]);
    }
}

void Imprime(float *p){
    int i;

    for(i=0; i<TAM; i++)
	printf("%.2f\n", p[i]);
}

int main(){

    float vec[TAM];

    Carga(vec);
    Imprime(vec);

    return EXIT_SUCCESS;
}
