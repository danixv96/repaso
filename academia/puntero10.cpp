#include <stdio.h>
#include <stdlib.h>

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
}

int main(){

    struct pais p1, p2, p3;

    printf("\tCarga de datos\n");
    
    Carga(&p1);
    Carga(&p1);
    Carga(&p1);

    printf("\tMuestra datos\n");

    Datos(p1);
    Datos(p2);
    Datos(p3);

    return EXIT_SUCCESS;
}
