#include <stdio.h>
#include <stdlib.h>

void Incrementa(int *p){
    *p=*p+1;
}

int main(){

    int x;

    printf("numero: ");
    scanf("%i", &x);

    Incrementa(&x);

    printf("valor incrementado: %i\n", x);

    return EXIT_SUCCESS;
}
