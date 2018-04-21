#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int main(){

=======
void Carga(float altura[5]){
    int x;

    for(x=0; x<5; x++){
        printf("altura: ");
        scanf("%f", &altura[x]);
    }
}

void Promedio(float altura[5]){
    int x;
    float prom=0;
    float suma=0;

    printf("\tLas alturas son:\n");

    for(x=0; x<5; x++){
        printf("%.2f\n", altura[x]);
        suma += suma+altura[x];
        prom = suma/5;
    }

    printf("\tPromedio: %.2f\n", prom);
}

int main(){

    float altura[5];

    Carga(altura);
    Promedio(altura);
>>>>>>> ee4cc89780127eb1ea86343c559c1520fda002f0

    return EXIT_SUCCESS;
}
