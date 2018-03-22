#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1;

    printf("numero: ");
    scanf("%d",&op1);

    if(op1 % 2 == 0)
        printf("es par\n");
    else
        printf("es impar\n");

    return EXIT_SUCCESS;
}
