#include <stdio.h>
#include <stdlib.h>

int main() {

    char letra;
    int opc;

    printf("letra: ");
    scanf("%c", &letra);

    printf("opcion [1-3]: ");
    scanf("%i", &opc);

    switch (opc)
    {
     case '1':
	     if(letra=a || letra=e || letra=i || letra=o || letra=u)
 	         printf("es una vocal\n");
	     break;
     case '2':
	     if(letra=0 || letra=1 || letra=2 || letra=3 || letra=4 || letra=5 || letra=6 || letra=7 || letra=8 || letra=9)
		 printf("es un numero\n");
	     break;
     case '3':
	     if(letra!=a || letra!=e || letra!=i || letra!=o || letra!=u)
		 printf("es una consonante\n");

    
    }

    return EXIT_SUCCESS;
}
