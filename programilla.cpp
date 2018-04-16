#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

int main(){


    char pal1[N];
    int contador = 0, a, b, c, d;

    do {
        printf("palabra %i: ", contador+1);
        scanf(" %s", &pal1[contador]);
        contador++;
    } while (contador == 3);

    a = strlen(pal1[0]);
    b = strlen(pal1[1]);
    c = strlen(pal1[2]);

    if(a<5){  
        d = a + b + c;
        printf("%i\n", d);
      }
    else{ 
        d = (a+b) * c;
        printf("%i\n", d);
        }
    if(b<10){
        d = a * (b+c);
        printf("%i\n", d);
    }else if(b>15){
        d = a * b * c;
        printf("%i\n", d);
    }
    if(c == 1){
        for(int i=1; i<=10; i++)
            printf("%i\n", i);
    }
    if(c>1)
        for(int j=0; j=-10; j--)
            printf("%i\n", j);

   contador=0; 

    while(a+b+c==20){
        printf("%i\n", contador);
        contador++;
    }
        return EXIT_SUCCESS;
}
