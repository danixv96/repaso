#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int main(){

    int vec[4]={2,4,10,20};
    int *pe;
    int i;

    pe=vec;

    for(i=0; i<4; i++)
        printf("%i\n", pe[i]);
=======
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
>>>>>>> a8ff70784ee843bcb2b82f63dd35d379a1ad86c5

    return EXIT_SUCCESS;
}
