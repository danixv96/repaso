#include <stdio.h>
#include <stdlib.h>

int main(){

    int t, n;

    for(t=1; t<=5; t++)
    {
     for(n=1; n<=10; n++)
         printf("%d por %d es: %d\n", t,n,t*n);	     
    }

    return EXIT_SUCCESS;
}
