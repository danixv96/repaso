#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    do
    {
     printf("numero (0 para salir): ");
     scanf("%d", &num);
    } 
    while (num!=0);

    return EXIT_SUCCESS;
}
