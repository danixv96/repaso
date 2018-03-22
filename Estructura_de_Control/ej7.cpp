#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1,op2;

    printf("valor 1: ");
    scanf("%d", &op1);

    printf("valor 2: ");
    scanf("%d", &op2);

    if(op1>0 && op2>0)
        printf("los 2 son positivos\n");

     if(op1>0 && op2<0)
        printf("1 de los numeros es positivo\n");

      if(op1<0 && op2<0)
          printf("ninguno es positivo\n");

    return EXIT_SUCCESS;
}
