#include <stdio.h>
#include <stdlib.h>

#define TAM 3

struct fecha {
    int dd;
    int mm;
    int aa;
};

struct producto {
    int cod;
    char desc[40];
    float precio;
    struct fecha fechavencimiento;
};

void Carga(struct producto vec[TAM]){
    int i;

    for(i=0; i<TAM; i++){
        printf("codigo: ");
        scanf("%i", &vec[i].cod);

        printf("descripcion: ");
        fgets(vec[i].desc,40,stdin);
        fflush(stdin);

        printf("precio: ");
        scanf("%f", &vec[i].precio);

        printf("dd: ");
        scanf("%i", &vec[i].fechavencimiento.dd);

        printf("mm: ");
        scanf("%i", &vec[i].fechavencimiento.mm);

        printf("aa: ");
        scanf("%i", &vec[i].fechavencimiento.aa);

    }
}

void Imprimir(struct producto vec[TAM]){
    int i;

    for(i=0; i<TAM; i++){

        printf("Codigo: %i, descripcion: %s, precio: %.2f\n", vec[i].cod, vec[i].desc, vec[i].precio);

        printf("Dia: %i, Mes: %i, Año: %i\n", vec[i].fechavencimiento.dd, vec[i].fechavencimiento.mm, vec[i].fechavencimiento.aa);

    }
}

int main(){

    struct producto vec[TAM];

    Carga(vec);
    Imprimir(vec);

    return EXIT_SUCCESS;
}
