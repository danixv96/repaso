#include <stdio.h>
#include <stdlib.h>

void Msg(char nombre[10]){
    printf("\tEL AHORCADO\n");

    printf("nombre: ");
    fgets(nombre,10,stdin);
    fflush(stdin);

    system("clear");
}

int main(){

    char nombre[10];

    Msg(nombre);

    return EXIT_SUCCESS;
}
