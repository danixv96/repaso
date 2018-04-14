#include <stdio.h>
#include <stdlib.h>

void Resultado(int op){

    printf("numero: ");
    scanf("%d", &op);

    if(op<=0)
	printf("\tError, no se puede introducir numeros <= 0\n");

    for(int i=1; i<=op; i++)
	printf("%d\n", i);
     
}

int main(){

    int num;

    Resultado(num);

    return EXIT_SUCCESS;
}
