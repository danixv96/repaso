#include <stdio.h>
#include <stdlib.h>

struct producto {
    int cod;
    char desc[40];
    float prec;
};

void Carga(struct producto *pproducto){

    printf("codigo: ");
    scanf("%i", &(*pproducto).cod);

    printf("descripcion: ");
    fgets((*pproducto).desc,40,stdin);
    fflush(stdin);

    printf("precio: ");
    scanf("%f", &(*pproducto).prec);
}

void Imprime(struct producto prod){

    printf("Codigo producto: %i\n", prod.cod);
    printf("Descripcion producto: %s\n", prod.desc);
    printf("Precio producto: %0.2f\n", prod.prec);
}

int main(){

    struct producto prod;

    Carga(&prod);

    printf("\tInformacion productos\n");

    Imprime(prod);

    return EXIT_SUCCESS;
}
