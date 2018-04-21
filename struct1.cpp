#include <stdio.h>
#include <stdlib.h>

struct punto {
    int x;
    int y;
};

struct punto Carga(){
    struct punto p;

    printf("coordenada x: ");
    scanf("%i", &p.x);

    printf("coordenada y: ");
    scanf("%i", &p.y);

    return p;
}

void Cuadrante(struct punto p){

    if(p.x>0 && p.y>0)
        printf("Coordenada: %i y %i estan en el primer cuadrante\n", p.x, p.y);
    else
     if(p.x<0 && p.y>0)
         printf("Coordenada: %i y %i estan en el segundo cuadrante\n", p.x, p.y);
     else
      if(p.x>0 && p.y<0)
          printf("Coordenada: %i y %i estan en el tercer cuadrante\n", p.x, p.y);
      else
        if(p.x<0 && p.y<0)
            printf("Coordenada: %i y %i estan en el cuarto cuadrante\n", p.x, p.y);
}

int main(){

    struct punto p1, p2, p3;

    p1=Carga();
    p2=Carga();
    p3=Carga();

    Cuadrante(p1);
    Cuadrante(p2);
    Cuadrante(p3);

    return EXIT_SUCCESS;
}
