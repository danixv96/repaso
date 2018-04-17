#include <stdio.h>
#include <stdlib.h>

int main(){

    int cod = 1024;
    int clave = 4567;

    do
    {
     printf("usuario: ");
     scanf("%d", &cod);

     printf("contraseña: ");
     scanf("%d", &clave);
    }
    while (cod!=1024 || clave!=4567);

    return EXIT_SUCCESS;
}
