#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
struct pais {
    char nombre[40];
    int cantidadhab;
};

void Carga(struct pais *p){
    printf("nombre: ");
    fgets(p->nombre,40,stdin);
    fflush(stdin);

    printf("num habitantes: ");
    scanf("%i", &p->cantidadhab);
}

void Imprime(struct pais p){
    printf("nombre: %s\n", p.nombre);

    printf("\n");

    printf("num habitantes: %i\n", p.cantidadhab);
}

int main(){

    struct pais p1, p2, p3;

    Carga(&p1);
    Imprime(p1);
    printf("\n");

    Carga(&p2);
    Imprime(p2);
    printf("\n");

    Carga(&p3);
    Imprime(p3);
=======
#define TAM 5

void Carga(float *p){
    int i;

    for(i=0; i<TAM; i++){
	printf("Numero: ");
	scanf("%f", &p[i]);
    }
}

void Imprime(float *p){
    int i;

    for(i=0; i<TAM; i++)
	printf("%.2f\n", p[i]);
}

int main(){

    float vec[TAM];

    Carga(vec);
    Imprime(vec);
>>>>>>> a8ff70784ee843bcb2b82f63dd35d379a1ad86c5

    return EXIT_SUCCESS;
}
