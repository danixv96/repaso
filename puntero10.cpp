#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
struct pais{
    char nombre[40];
    int canthab;
};

void Carga(struct pais *pp){

    printf("Nombre pais: ");
    fgets(pp->nombre,40,stdin);
    fflush(stdin);

    printf("Nº habitantes: ");
    scanf("%i", &pp->canthab);
}

void Datos(struct pais ppais){
    
    printf("nombre: %s, nº habitantes: %i\n", ppais.nombre, ppais.canthab);
=======
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
>>>>>>> ee4cc89780127eb1ea86343c559c1520fda002f0
}

int main(){

<<<<<<< HEAD
    struct pais p1, p2, p3;

    printf("\tCarga de datos\n");
    
    Carga(&p1);
    Carga(&p1);
    Carga(&p1);

    printf("\tMuestra datos\n");

    Datos(p1);
    Datos(p2);
    Datos(p3);
=======
    struct producto prod;

    Carga(&prod);

    printf("\tInformacion productos\n");

    Imprime(prod);
>>>>>>> ee4cc89780127eb1ea86343c559c1520fda002f0

    return EXIT_SUCCESS;
}
