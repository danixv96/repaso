#include <stdio.h>
#include <stdlib.h>

struct pais {
    char nombre[40];
    int CantHab;
};


void Imprime(struct pais p){

    printf("Nombre: %s\n", p.nombre);
    printf("Habitantes: %d\n", p.CantHab);
    printf("\n\n"); 
}

int main(){

    struct pais p1={"España",500000};
    struct pais p2={"Italia",457000};
    struct pais p3={"Holanda",236000};
    struct pais p4={"Francia",687000};

    Imprime(p1);
    Imprime(p2);
    Imprime(p3);
    Imprime(p4);

    return EXIT_SUCCESS;
}
