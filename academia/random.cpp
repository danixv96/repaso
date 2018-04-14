#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int hora = time(NULL);
    int i, cont, num, par = 0, impar = 0;
    int cant = 50;

    srand(hora);

    for(cont=0; cont<cant; cont++){
	num = rand()%100;
        printf("%d\n", num);
	if(num%2==0)
	    par++;
	else
	    impar++;
    }

    printf("Numeros pares: %d\n", par);
    printf("\n");
    printf("Numeros impares: %d\n", impar);

    return EXIT_SUCCESS;
}
