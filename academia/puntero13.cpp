#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void Carga(int *p){
    int i;

    for(i=0; i<TAM; i++){
	printf("elemento: ");
	scanf("%i", &*p);
	p++;
    }
}

void Imprime(int *p){
    int i;

    for(i=0; i<TAM; i++){
	printf("%i\n", *p);
        p++;
    }
}

int main(){

    int vector[TAM];

    Carga(vector);
    Imprime(vector);
    
    return EXIT_SUCCESS;
}
