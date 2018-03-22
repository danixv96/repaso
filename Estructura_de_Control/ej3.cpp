#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1,op2;

    printf("valor 1 y 2: ");
    scanf("%d %d",&op1,&op2);

    if(op1 % op2 == 0)
        printf("es multiplo\n");
    else
        printf("no es multiplo\n");

    return EXIT_SUCCESS;
}
