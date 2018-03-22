#include <stdio.h>
#include <stdlib.h>

int main(){

    float x,y;
    float div=0;

    printf("valor x: ");
    scanf("%f",&x);

    printf("valor y: ");
    scanf("%f",&y);

    if(y!=0)
        div = x/y;
        printf("division: %4.2f\n",div);
    else  //fallo en el else(arreglar)
        printf("Error: No se puede dividir entre 0\n");

    return EXIT_SUCCESS;
}
