#include <stdio.h>
#include <stdlib.h>

int main(){

    float x,y,z;

    printf("valor x: ");
    scanf("%f",&x);

    printf("valor y: ");
    scanf("%f",&y);

    printf("valor z: ");
    scanf("%f",&z);

    if(x>y && x>z)
        printf("x es mayor\n");
    else
     if(y>x && y>z)
        printf("y es mayor\n");
     else
      if(z>x && z>y)
        printf("z es mayor\n");

    return EXIT_SUCCESS;
}
