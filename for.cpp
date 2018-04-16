#include <stdio.h>
#include <stdlib.h>

int main(){
    
    for(int a = 0; a < 9; a++)
        for(int b = 0; b < 9; b++)
            printf("%i%i\n", a, b);

    return EXIT_SUCCESS;
}
