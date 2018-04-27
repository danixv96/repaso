#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
void Carga(int *pe){
    int i;

    for(i=0; i<5; i++){
        printf("valor: ");
        scanf("%i", &*pe);
        pe++;
    }
}

void Imprimir(int *pe){
    int i;

    for(i=0; i<5; i++){
        printf("%i\n", *pe);
        pe++;
    }
=======
int Largo(char *cadena){

    int cont=0;

    while(*cadena!='\0'){
	cont++;
	*cadena++;
    }
    
    return cont;
>>>>>>> a8ff70784ee843bcb2b82f63dd35d379a1ad86c5
}

int main(){

<<<<<<< HEAD
    int matriz[5];

    Carga(matriz);
    Imprimir(matriz);
=======
    char nombre[20];

    printf("nombre: ");
    fgets(nombre,10,stdin);

    printf("el nombre %s tiene %i caracteres\n", nombre, Largo(nombre));
>>>>>>> a8ff70784ee843bcb2b82f63dd35d379a1ad86c5

    return EXIT_SUCCESS;
}
