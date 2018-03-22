#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1,op2;
    int prod=0;

    printf("numero 1: ");
    scanf("%d",&op1);

    if(op1==0)
        printf("el producto de 0 por cualquier numero es 0\n");
    else
        printf("numero 2: ");
        scanf("%d",&op2);

        prod = op1 * op2;

        printf("producto: %d\n",prod);

    return EXIT_SUCCESS;
}
