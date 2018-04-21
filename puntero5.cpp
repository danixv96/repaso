#include <stdio.h>
#include <stdlib.h>

void Incrementa(int *p){
    *p=*p+1;
}

int main(){

    int v=0;

    printf("%i\n", v);
    Incrementa(&v);

    printf("%i\n", v);
    Incrementa(&v);

    printf("%i\n", v);
    Incrementa(&v);

    printf("%i\n", v);
    Incrementa(&v);

    printf("%i\n", v);
    Incrementa(&v);

    return EXIT_SUCCESS;
}
