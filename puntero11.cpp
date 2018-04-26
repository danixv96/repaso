#include <stdio.h>
#include <stdlib.h>

struct pais {
    char nombre[40];
    int cantidadhab;
};

void Carga(struct pais *p){
    printf("nombre: ");
    fgets(p->nombre,40,stdin);
    fflush(stdin);

    printf("num habitantes: ");
    scanf("%i", &p->cantidadhab);
}

void Imprime(struct pais p){
    printf("nombre: %s\n", p.nombre);

    printf("\n");

    printf("num habitantes: %i\n", p.cantidadhab);
}

int main(){

    struct pais p1, p2, p3;

    Carga(&p1);
    Imprime(p1);
    printf("\n");

    Carga(&p2);
    Imprime(p2);
    printf("\n");

    Carga(&p3);
    Imprime(p3);

    return EXIT_SUCCESS;
}
