#include <stdio.h>
#include <stdlib.h>

void Carga(char mat[2][3]){
    int f,c;

    for(f=0; f<2; f++)
        for(c=0; c<3; c++){
	    printf("nombre: ");
	    fgets(mat[f][c]);
	}
}


void Imprime(char mat[2][3]){
    int f,c;

    for(f=0; f<2; f++)
	for(c=0; c<3; c++){
	    printf(" %s", mat[f][c]);
	}
}

int main(){

    char mat[2][3];

    Carga(mat);
    Imprime(mat);

    return EXIT_SUCCESS;
}
