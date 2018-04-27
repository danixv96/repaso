#include <stdio.h>
#include <stdlib.h>

int Largo(char *cadena){

    int cont=0;

    while(*cadena!='\0'){
	cont++;
	*cadena++;
    }
    
    return cont;
}

int main(){

    char nombre[20];

    printf("nombre: ");
    fgets(nombre,10,stdin);

    printf("el nombre %s tiene %i caracteres\n", nombre, Largo(nombre));

    return EXIT_SUCCESS;
}
