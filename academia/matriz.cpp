#include <stdio.h>
#include <stdlib.h>

int main(){

    int mat1[2][3], mat2[2][3];
    int f,c;

    for(f=0; f<2; f++) 
	for(c=0; c<3; c++){
	    mat1[f][c] = rand()%100;
	}

    for(f=0; f<2; f++) 
	for(c=0; c<3; c++){
	    mat2[f][c] = rand()%100;
	}

    for(f=0; f<2; f++) 
	for(c=0; c<3; c++){
	    printf("%d\n", mat1[f][c]);   
	}

    for(f=0; f<2; f++) 
	for(c=0; c<3; c++){
	    printf("%d\n", mat2[f][c]);   
	}
 

    return EXIT_SUCCESS;
}
