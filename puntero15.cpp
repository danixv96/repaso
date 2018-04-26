#include <stdio.h>
#include <stdlib.h>

int main(){

    int *pe;
    int tam;
    int i;

    printf("\telementos del vector: ");
    scanf("%i", &tam);

    pe=(int*)malloc(tam*sizeof(int));

    if(pe==NULL)
        printf("\tError al reservar memoria\n");
    else
        printf("\tMemoria reservada sin problemas\n");

    for(i=0; i<tam; i++){
        printf("elemento: ");
        scanf("%i", &pe[i]);
    }

    printf("\tContenido\n");

    for(i=0; i<tam; i++)
        printf("%i\n", pe[i]);

    free(pe);

    return EXIT_SUCCESS;
}
