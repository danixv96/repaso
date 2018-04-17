#include <stdio.h>
#include <stdlib.h>

int main(){

    char l1,l2,l3,l4;

    printf("4 letras: ");
    l1 = getchar();
    l2 = getchar();
    l3 = getchar();
    l4 = getchar();

    printf("Palabra invertida: %c%c%c%c\n", l4,l3,l2,l1);

    return EXIT_SUCCESS;
}
