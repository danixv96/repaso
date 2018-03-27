#include <stdio.h>
#include <stdlib.h>

int main() {

    float op1,op2,op3;

    printf("valor 1: ");
    scanf("%f", &op1);

    printf("valor 2: ");
    scanf("%f", &op2);

    printf("valor 3: ");
    scanf("%f", &op3);

    if(op1>op2 && op1>op3)
        printf("%f es el mayor\n", op1);
     if(op2>op1 && op2>op3)
	 printf("%f es el mayor\n", op2);
      if(op3>op1 && op3>op2)
	  printf("%f es el mayor\n", op3);
       

    return EXIT_SUCCESS;
}
