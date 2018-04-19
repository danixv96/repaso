#include <stdio.h>
#include <stdlib.h>

struct punto {
    int x;
    int y;
};

struct triangulo {
    struct punto p1;
    struct punto p2;
    struct punto p3;
};

struct triangulo carga(){
    struct triangulo t1;

    printf("Coordenadas (x-y) punto 1: ");
    scanf("%i %i", &t1.p1.x, &t1.p1.y);

    printf("Coordenadas (x-y) punto 2: ");
    scanf("%i %i", &t1.p2.x, &t1.p2.y);

    printf("Coordenadas (x-y) punto 3: ");
    scanf("%i %i", &t1.p3.x, &t1.p3.y);

    return t1;
};

void Imprimir(struct triangulo t1){

    system("clear");

    printf("\tCoordenadas\n");

    printf("Punto 1 coordenada (%i, %i)\n", t1.p1.x, t1.p1.y);
    printf("Punto 2 coordenada (%i, %i)\n", t1.p2.x, t1.p2.y);
    printf("Punto 3 coordenada (%i, %i)\n", t1.p3.x, t1.p3.y);


}

int main(){

    struct triangulo a;

    a=carga();
    Imprimir(a);

    return EXIT_SUCCESS;
}
