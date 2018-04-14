#include <stdio.h>
#include <stdlib.h>

void Cuadrado(){
    int op, cuadrado;

    printf("numero: ");
    scanf("%d", &op);

    cuadrado = op * op;

    printf("el cuadrado de tu numero es: %d\n", cuadrado);
}

void Producto(){
    int op1, op2, prod;

    printf("numero 1: ");
    scanf("%d", &op1);

    printf("numero 2: ");
    scanf("%d", &op2);

    prod = op1 * op2;

    printf("el producto es: %d\n", prod);
}

int main(){

    Cuadrado();
    Producto();

    return EXIT_SUCCESS;
}
