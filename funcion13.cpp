#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){

    char frase[20];

    printf("frase: ");
    gets(frase);

    printf("tu frase es: %s\n", frase);

    return EXIT_SUCCESS;
}
