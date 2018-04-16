#include <stdio.h>
#include <stdlib.h>

void Carga(int vec[8]){
    int x;

    for(x=0; x<8; x++){
        printf("valor: ");
        scanf("%i", &vec[x]);
    }
}

int Total(int vec[8]){
    int x;
    int suma=0;

    for(x=0; x<8; x++)
        suma = suma + vec[x];

    printf("Valor total del vector: %i\n", suma);

    return suma;
}

int SumaMayores36(int vec[8]){
    int x;
    int mayores=0;

    for(x=0; x<8; x++)
        if(vec[x]>36)
            mayores = mayores + vec[x];

    printf("Suma mayores que 36: %i\n", mayores);

    return mayores;
}

int CantMayores50(int vec[8]){
    int x;
    int cont=0;

    for(x=0; x<8; x++)
        if(vec[x]>50)
            cont++;

    printf("Numeros mayores que 50: %i\n", cont);

    return cont;
}

int main(){

    int vec[8];

    Carga(vec);
    Total(vec);
    SumaMayores36(vec);
    CantMayores50(vec);

    return EXIT_SUCCESS;
}
