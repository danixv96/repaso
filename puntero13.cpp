#include <stdio.h>
#include <stdlib.h>

void Carga(char *pc){

    printf("frase: ");
    fgets(pc,40,stdin);
}

void Imprime(char *pc){

    printf("tu frase es: %s\n", pc);
}

int main(){

    char vec[40];

    Carga(vec);
    Imprime(vec);

    return EXIT_SUCCESS;
}
