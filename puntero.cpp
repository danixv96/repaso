#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor1=10;
    int valor2=20;
    int *p;
    p=&valor1;

    printf("Lo que apunta p es: %i\n", *p);
    printf("y la direccion que guarda es: %p\n", p);

    p=&valor2;

    printf("Lo que apunta p es: %i\n", *p);
    printf("y la direccion que guarda es: %p\n", p);

    return EXIT_SUCCESS;
}
