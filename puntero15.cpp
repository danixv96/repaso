#include <stdio.h>
#include <stdlib.h>

int main(){

    int *pe;
    int tam;
    int i;

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
}
