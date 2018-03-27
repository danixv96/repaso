#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    for(n=1; n<=50; n++)
    {
     if(n % 3 == 0)
	 printf("%d\n", n);
    }

    return EXIT_SUCCESS;
}
