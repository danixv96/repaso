#include <stdio.h>
#include <stdlib.h>

int main(){

    int vec[4]={2,4,10,20};
    int *pe;
    int i;

    pe=vec;

    for(i=0; i<4; i++)
        printf("%i\n", pe[i]);

    return EXIT_SUCCESS;
}
