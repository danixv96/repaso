#include <stdio.h>
#include <stdlib.h>

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
}
