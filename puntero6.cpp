#include <stdio.h>
#include <stdlib.h>

void Intercambio(int *p1, int *p2){
    int aux=*p1;

    *p1=*p2;
    *p2=aux;
}

int main(){

    int v1, v2;

    printf("valores 1 y 2: ");
    scanf("%i %i", &v1,&v2);

    Intercambio(&v1,&v2);

    printf("valor 1 vale: %i, valor 2 vale: %i\n", v1,v2);

    return EXIT_SUCCESS;
}
