#include <stdio.h>
#include <stdlib.h>

void Mayor(int v1, int v2, int v3){
    if(v1>v2 && v1>v3)
	printf("%d es el mayor\n", v1);
    else
     if(v2>v1 && v2>v3)
	printf("%d es el mayor\n", v2);
     else
      if(v3>v1 && v3>v2)
	 printf("%d es el mayor\n", v3);
}

int main(){

    int valor1, valor2, valor3;

    printf("num 1: ");
    scanf("%d", &valor1);

    printf("num 2: ");
    scanf("%d", &valor2);

    printf("num 3: ");
    scanf("%d", &valor3);

    Mayor(valor1,valor2,valor3);

    return EXIT_SUCCESS;
}
