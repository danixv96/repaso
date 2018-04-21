#include <stdio.h>
#include <stdlib.h>

int main(){

    char c1='A';
    char c2='B';
    char *p;

    p=&c1;
    printf("%c\n", c1); /*imprime la A*/
    *p='a';
    printf("%c\n", c1); /*imprime la a*/

    c1='Z';
    printf("%c\n", *p); /*Imprime la Z*/
    p=&c2;
    printf("%c\n", *p); /*Imprime la B*/

    return EXIT_SUCCESS;
}
