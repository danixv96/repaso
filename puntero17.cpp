#include <stdio.h>
#include <stdlib.h>

int main(){

    int letras;
    char *pe;

    printf("cuantas letras tiene tu palabra: \n");
    scanf("%i", &letras);

    pe=(char*)malloc(letras*sizeof(char)+1);

    if(pe==NULL)
        printf("\tNo se ha reservado la memoria\n");
    else
        printf("\tMemoria reservada correctamente\n");

    printf("Palabra: ");
    scanf("%s", &*pe);

    printf("tu palabra es: %s\n", pe);

    free(pe);

    return EXIT_SUCCESS;
}
