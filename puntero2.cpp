#include <stdio.h>
#include <stdlib.h>

int main(){

    int v1, v2;
    int *p;

    p=&v1;
    *p=69;

    p=&v2;
    *p=96;

    printf("valor 1: %i\n", v1);
    printf("valor 1: %i\n", v2);

    return EXIT_SUCCESS;
}
