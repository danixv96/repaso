#include <stdio.h>
#include <stdlib.h>

void Carga(float sueldos[4]){
    int x;

    for(x=0; x<4; x++){
        printf("sueldos: ");
        scanf("%f", &sueldos[x]);
    }
}

float GastoTurno(float sueldos[4]){
    float suma=0;
    int x;

    for(x=0; x<5; x++)
        suma = suma + sueldos[x];

    return suma;
}

int main(){

    float sueldosMa[4];
    float sueldosTar[4];

    printf("\tSueldos del turno de mañana\n");
    Carga(sueldosMa);
    printf("\tSueldos del turno de tarde\n");
    Carga(sueldosTar);
    printf("\tGastos del turno de mañana: %0.2f\n", GastoTurno(sueldosMa));
    printf("\tGastos del turno de tarde: %0.2f\n", GastoTurno(sueldosTar));

    return EXIT_SUCCESS;
}
