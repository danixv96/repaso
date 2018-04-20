#include <stdio.h>
#include <stdlib.h>

void Carga(int *p1, int *p2){
    *p1=20;
    *p2=50;
}

int main(){

    int op1, op2;
    Carga(&op1,&op2);

    printf("contenido variables: %i y %i\n", op1, op2);

    return EXIT_SUCCESS;
}
