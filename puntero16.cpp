#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct producto {
    int codigo;
    char desc[41];
    float precio;
};

int main(){

    struct producto *ps;

    ps=(producto*)malloc(sizeof(struct producto));

    if(ps==NULL)
        printf("\tERROR al reservar memoria\n");
    else
        printf("\tMemoria reservada correctamente\n");

    system("clear");

    ps->codigo=01;
    strcpy(ps->desc, "coca cola");
    ps->precio=1.75;

    printf("\tInformacion producto\n");

    printf("Codigo: %i\n", ps->codigo);
    printf("Descripcion: %s\n", ps->desc);
    printf("Precio: %.2f\n", ps->precio);

    free(ps);

    return EXIT_SUCCESS;
}
