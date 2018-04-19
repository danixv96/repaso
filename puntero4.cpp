#include <stdio.h>
#include <stdlib.h>

void Carga(int *p1, int *p2){

    *p1=10;
    *p2=100;
}

int main(){

    int x, y;

    Carga(&x,&y);

    printf("valor 1 y 2: %i y %i\n", x,y);

    return EXIT_SUCCESS;
}
