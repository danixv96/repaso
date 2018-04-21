#include <stdio.h>
#include <stdlib.h>

void CalculaRaiz(float num[3]){

    do {
    for(int i=0; i<3; i++){
	printf("valor: ");
        scanf("%f", &num[i]);
     if(num[0] == 0)
         printf("error, numero invalido\n");

    }
    } while(num[0]==0);

    
}
int main(){

    float array[3];

    CalculaRaiz(array);

    return EXIT_SUCCESS;
}
