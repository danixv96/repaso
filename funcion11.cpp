#include <stdio.h>
#include <stdlib.h>

void Carga(float vec[5]){
    int x;

    printf("\tCarga las notas\n");

    for(x=0; x<5; x++){
        printf("Nota: ");
        scanf("%f", &vec[x]);
    }
}

float Prom(float vec[5]){
    int x;
    float suma=0, prom=0;

    for(x=0; x<5; x++)
        suma = suma + vec[x];

    prom = suma / 5;

    printf("promedio clase: %.2f\n", prom);

    return prom;
}

int main(){

    float vecA[5];
    float vecB[5];

    Carga(vecA);
    Carga(vecB);
    Prom(vecA);
    Prom(vecB);

    return EXIT_SUCCESS;
}
