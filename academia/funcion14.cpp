#include <stdio.h>
#include <stdlib.h>

struct datos {
    char nombre[15];
    char apellidos[40];
    int edad;
    int dni;
};

void Mensaje(){
    printf("\tBienvenido a tu banco virtual\n");
}

void PedirDatos(){
    struct datos p1;

    printf("Nombre: ");
    fgets(p1.nombre,15,stdin);
    fflush(stdin);

    printf("Apellidos: ");
    fgets(p1.apellidos,40,stdin);
    fflush(stdin);

    printf("Edad: ");
    scanf("%i", &p1.edad);

    printf("Dni(solo numeros): ");
    scanf("%i", &p1.dni);

    if(p1.edad<18)
	printf("\tERROR, tiene que ser >=18\n");
}

void Identificacion(struct datos p1){
    int pin=3723;
    int intentos=3;
    int pass;

    do {
	printf("PIN: ");
	scanf("%i", &pass);

       	if(pass!=pin)
	    intentos--;

	 if(intentos==0)
	    printf("\tERROR, TARJETA BLOQUEADA\n");

	  
    } while(intentos>0);
}

void Menu(struct datos p1){
    float saldo=860.000;

    system("clear");

    int opcion;

    printf("\t1. Consultar saldo\n \t2. Retirar saldo\n \t3. Añadir saldo\n");
}

int main(){

    struct datos p1;

    Mensaje();
    PedirDatos();
    Identificacion(p1);
    Menu(p1);

    return EXIT_SUCCESS;
}
