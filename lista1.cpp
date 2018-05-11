#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

struct f {
    char nombre[20];
    char dir[50];
    int edad;
    struct f* siguiente;
};

void ImprimeLista(struct f *init){
    if(init!=NULL){
        printf("name: %s\n", init->nombre);
        printf("direction: %s\n", init->dir);
        printf("age: %i\n", init->edad);
    }
}

int main(){

    struct f *dato1;
    struct f *dato2;
    struct f *dato3;

    dato1 = (struct f*) malloc(sizeof(struct f));
    strcpy(dato1->nombre, "Rodney Mullen");
    strcpy(dato1->dir, "Irving Park, 6");
    dato1->edad = 27;
    dato1->siguiente = NULL;

    dato2 = (struct f*) malloc(sizeof(struct f));
    strcpy(dato2->nombre, "Paul Rodriguez");
    strcpy(dato2->dir, "Oakland Avenue, 96");
    dato2->edad = 45;
    dato2->siguiente = NULL;
    dato1->siguiente = dato2;

    dato3 = (struct f*) malloc(sizeof(struct f));
    strcpy(dato3->nombre, "Tony Hawk");
    strcpy(dato3->dir, "Fake Avenue, 12");
    dato3->edad = 50;
    dato3->siguiente = NULL;
    dato3->siguiente = dato2;
    dato1->siguiente = dato3;

    printf("\tContenido lista\n");

    ImprimeLista(dato1);
    dato1->siguiente = dato2;
    free(dato3);
    printf("\tContenido lista sin tercer elemento\n");
    ImprimeLista(dato1);

    return EXIT_SUCCESS;
}
