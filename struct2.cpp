#include <stdio.h>
#include <stdlib.h>

#define TAM 4

struct libro {
    int codigo;
    char titulo[40];
    char autor[40];
};

void Carga(struct libro vec[TAM]){
    int i;

    for(i=0; i<TAM; i++){
        printf("Codigo libro: ");
        scanf("%i", &vec[i].codigo);

        printf("Titulo: ");
        fgets(vec[i].titulo,40,stdin);
        fflush(stdin);

        printf("Autor: ");
        fgets(vec[i].autor,40,stdin);
        fflush(stdin);
    }
}

void Listado(struct libro vec[TAM]){
    int i;

    for(i=0; i<TAM; i++)
        printf("\tCodigo %i, Titulo: %s, Autor: %s\n", vec[i].codigo, vec[i].titulo, vec[i].autor);
}

int main(){

    struct libro vec[TAM];

    Carga(vec);
    Listado(vec);

    return EXIT_SUCCESS;
}
