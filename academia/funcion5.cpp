#include <stdio.h>
#include <stdlib.h>

void Vocal(char letra){
    
    printf("letra: ");
    scanf("%c", &letra);

    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
	printf("Es una vocal\n");
    else
	printf("No es una vocal\n");
}

int main(){

    char l;

    Vocal(l);

    return EXIT_SUCCESS;
}
