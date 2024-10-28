#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrizA[3][3], matrizB[3][3], matrizSoma[3][3], matrizSub[3][3], soma=0, sub=0, i=0, j=0;
   
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor para a matrizA na posicao [%d, %d]= ", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }
	printf("\n");
	for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor para a matrizB na posicao [%d, %d]= ", i+1, j+1);
            scanf("%d", &matrizB[i][j]);
        }
    }
	
	for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
	
	for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrizSub[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
	
	printf("\nA soma das matrizes eh:");
	for(i = 0; i < 3; i++){
    	printf("\n");
        for(j = 0; j < 3; j++){
    		printf("%d  ", matrizSoma[i][j]);
    	}
    }
	
	printf("\nA subtracao das matrizes eh:");
	for(i = 0; i < 3; i++){
    	printf("\n");
        for(j = 0; j < 3; j++){
    		printf("%d  ", matrizSub[i][j]);
    	}
    }
	
    return 0;
}
