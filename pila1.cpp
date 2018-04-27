#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int info;
    struct nodo *n; //next
};

struct nodo *r=NULL; //variable global raiz

void Carga(int x) {
    struct nodo *niu; //nuevo
    niu=(int*)malloc(sizeof(struct nodo));

    if(niu==NULL)
        printf("\t0\n");
    else
        printf("\t1\n");

     if(r==NULL){
         r=niu;
         niu->n;
     }
     else {
         niu->n;
         r=niu;
     }
}

void Imprimir() {
    struct nodo *reco=r;
    printf("Lista completa\n");
    while(reco!=NULL){
        printf("%i \n",reco->info);
        reco=reco->n;
    }
    printf("\n");
}

int Extraer() {
    if(r!=NULL){
        int informacion=r->info;
        struct nodo *bor=r;
        r=r->n;
        free(bor);
        return informacion;
    }
    else {
        return -1;
    }
}

void Liberar() {
    struct nodo *reco=r;
    struct nodo *bor;
    while(reco!=NULL){
        bor=reco;
        reco=reco->n;
        free(bor);
    }
}

int main(){

    Carga(10);
    Carga(20);
    Carga(15);
    Imprimir();
    printf("extraccion de la pila: %i", Extraer());
    Imprimir();
    Liberar();

    return EXIT_SUCCESS;
}
