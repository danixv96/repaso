#include <stdio.h>
#include <stdlib.h>

void Carga(int vec[5]){
    int x;

    for(x=0; x<5; x++){
        printf("numero: ");
        scanf("%i", &vec[x]);
    }
}

int Menor(int vec[5]){
    int menor=vec[0];
    int x;

    for(x=0; x<5; x++)
        if(vec[x]<menor)
            menor=vec[x];

    printf("el menor es %i\n", menor);

    return menor;
}

void Verifica(int vec[5], int menor){
    int cant=0, x;

    for(x=0; x<5; x++)
        if(vec[x]==menor)
            cant++;


    if(cant==1)
        printf("El menor se repite\n");
    else
        printf("El menor no se repite\n");
}

int main(){

    int vec[5], menor;

    Carga(vec);
    Menor(vec);
    Verifica(vec,menor);


    return EXIT_SUCCESS;
}
