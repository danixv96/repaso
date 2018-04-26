#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
void Carga(char *pc){

    printf("frase: ");
    fgets(pc,40,stdin);
}

void Imprime(char *pc){

    printf("tu frase es: %s\n", pc);
=======
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
>>>>>>> a8ff70784ee843bcb2b82f63dd35d379a1ad86c5
}

int main(){

<<<<<<< HEAD
    char vec[40];

    Carga(vec);
    Imprime(vec);

=======
    int vector[TAM];

    Carga(vector);
    Imprime(vector);
    
>>>>>>> a8ff70784ee843bcb2b82f63dd35d379a1ad86c5
    return EXIT_SUCCESS;
}
