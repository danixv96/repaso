#include <stdio.h>
#include <stdlib.h>

void Presentacion(){
    
    printf("\tBienvenido al programa que muestra el menor de un numero 3 veces\n");
}

void Menor(){
    int op1,op2,op3;

    printf("numero 1: ");
    scanf("%d", &op1);
   
    printf("numero 2: ");
    scanf("%d", &op2);
   
    printf("numero 3: ");
    scanf("%d", &op3);

    if(op1<op2 && op1<op3)
        printf("%d es el menor\n", op1);
    else
     if(op2<op1 && op2<op3)
	 printf("%d es el menor\n", op2);
     else
      if(op3<op1 && op3<op1)
	  printf("%d es el menor\n", op3);
}

int main(){

    Presentacion();
    Menor();
    Menor();
    Menor();

    return EXIT_SUCCESS;
}
