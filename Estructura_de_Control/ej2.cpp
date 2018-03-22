#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1,op2;

    printf("valor 1: ");
    scanf("%d",&op1);

    printf("valor 2: ");
    scanf("%d",&op2);

    if(op1>op2)
        printf("%d es el mayor\n",op1);
    else
        printf("%d es el mayor\n",op2);

    return EXIT_SUCCESS;
}
