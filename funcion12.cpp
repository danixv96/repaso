#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
struct pais {

    char nombre[40];
    int CantHab;
};

int main(){

    struct pais p1, p2, p3;

    printf("nombre: ");
    fgets(p1.nombre,40,stdin);

    printf("habitantes: ");
    scanf("%d", &p1.CantHab);
    fflush(stdin);

    printf("nombre: ");
    fgets(p2.nombre,40,stdin);

    printf("habitantes: ");
    scanf("%d", &p2.CantHab);
    fflush(stdin);

    printf("nombre: ");
    fgets(p3.nombre,40,stdin);

    printf("habitantes: ");
    scanf("%d", &p3.CantHab);
    fflush(stdin);

/*    if(p1.CantHab>p2.CantHab && p1.CantHab>p3.CantHab)
        printf("%s tiene mas habitantes\n", p1.nombre);
    else
     if(p2.CantHab>p1.CantHab && p2.CantHab>p3.CantHab) 
         printf("%s tiene mas habitantes\n", p2.nombre);
     else
      if(p3.CantHab>p1.CantHab && p3.CantHab>p2.CantHab)
	  printf("%s tiene mas habitantes\n", p3.nombre); 
*/

return EXIT_SUCCESS;
=======
void Carga(int vec[5]){
    int x;

    for(x=0; x<5; x++){
        printf("numero: ");
        scanf("%i", &vec[x]);
    }
}

int Menor(int vec[5]){
    int menor=vec[0];
    int x;

    for(x=0; x<5; x++)
        if(vec[x]<menor)
            menor=vec[x];

    printf("el menor es %i\n", menor);

    return menor;
}

void Verifica(int vec[5], int menor){
    int cant=0, x;

    for(x=0; x<5; x++)
        if(vec[x]==menor)
            cant++;


    if(cant==1)
        printf("El menor se repite\n");
    else
        printf("El menor no se repite\n");
}

int main(){

    int vec[5], menor;

    Carga(vec);
    Menor(vec);
    Verifica(vec,menor);


    return EXIT_SUCCESS;
>>>>>>> ee4cc89780127eb1ea86343c559c1520fda002f0
}
