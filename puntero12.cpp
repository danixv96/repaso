#include <stdio.h>
#include <stdlib.h>

#define TAM 40

void Carga(char *pal){
    
    printf("frase/palabra: ");
    fgets(pal,TAM,stdin);
}

void Muestra(char *pal){

    printf("palabra/frase: %s\n", pal);
}

int main(){

    char palabra[TAM];

    Carga(palabra);
    Muestra(palabra);

    return EXIT_SUCCESS;
}
