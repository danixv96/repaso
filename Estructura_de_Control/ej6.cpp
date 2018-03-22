#include <stdio.h>
#include <stdlib.h>

int main(){

    char l;

    printf("letra: ");
    scanf("%c",&l);

    if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u')
        printf("es una vocal\n");
    else
        printf("no es una vocal\n");

    return EXIT_SUCCESS;
}
