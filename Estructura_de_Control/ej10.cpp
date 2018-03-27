#include <stdio.h>
#include <stdlib.h>

int main(){

    int pass;

    printf("contraseña [4567 para salir]: ");
    scanf("%d", &pass);

    while (pass!=4567)
    {
        printf("contraseña [4567 para salir]: ");
 	scanf("%d", &pass);	
    }
    return EXIT_SUCCESS;
}
