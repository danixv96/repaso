#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int num;
    struct nodo* next;
};

void Imprime(struct nodo *init){
    if(init!=NULL){
        printf("numero: %i\n", init->num);
        init->next;
    }
}

int main(){

    struct nodo *uno;
    struct nodo *dos;
    struct nodo *tres;

    uno = (struct nodo*) malloc(sizeof(struct nodo));
    uno->num=4;
    uno->next=NULL;

    dos = (struct nodo*) malloc(sizeof(struct nodo));
    dos->num=6;
    dos->next=NULL;

    uno->next=dos;

    tres = (struct nodo*) malloc(sizeof(struct nodo));
    tres->num=8;
    tres->next=dos;
    uno->next=tres;

    printf("\tContenido lista\n");
    Imprime(uno);
    Imprime(dos);
    Imprime(tres);

    return EXIT_SUCCESS;
}
