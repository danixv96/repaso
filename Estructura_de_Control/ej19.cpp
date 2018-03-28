#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1 = 36;
    int n;
    int v = 6;

    printf("Tienes 6 intentos.\n");
    system("clear");
   
    do {
     printf("numero [1-100]: ");
     scanf("%d", &n);

     if(n!=n1)
	 v--;

     if(n>n1)
         printf("Te has pasado\n");
     else
	 printf("Te has quedado corto\n");
      } 
     while (n!=n1 && v>=1);
   
    return EXIT_SUCCESS;
}
