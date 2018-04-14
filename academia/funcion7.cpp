#include <stdio.h>
#include <stdlib.h>

int RetornaSuperficie(int lado1, int lado2){

    int sup=0;

    printf("lado 1: ");
    scanf("%d", &lado1);

    printf("lado 2: ");
    scanf("%d", &lado2);

    sup = lado1 * lado2;
  
    return sup;
}

int main(){

    int l1, l2;

    RetornaSuperficie(l1,l2);

    return EXIT_SUCCESS;
}
