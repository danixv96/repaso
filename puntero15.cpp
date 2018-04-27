#include <stdio.h>
#include <stdlib.h>

int main(){

    int *pe;
    int tam;
    int i;

<<<<<<< HEAD
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
=======
    printf("elementos del vector: ");
    scanf("%i", &tam);

  //printf("%x", sizeof(int));

  //pe=malloc(tam*sizeof(int));

    for(i=0; i<tam; i++){
	printf("numero: ");
	scanf("%i", &pe[i]);
    }

    printf("contenido vector dinamico:");

    for(i=0; i<tam; i++)
	printf("%i", pe[i]);

    free(pe);

    return 0;
>>>>>>> a8ff70784ee843bcb2b82f63dd35d379a1ad86c5
}
