#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0, j=0;
    float matriz[4][4], d[4];
	
	printf("Preencha a Matriz 4x4 com valores no intervalo [1, 20]\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o valor da linha %d, coluna %d = ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
            if( matriz[i][j] < 1 || matriz[i][j] > 20){
            	printf("Erro, eh preciso digitar valores no intervalo [1, 20]\n");
            	return 0;
            }
		}
    }
	
	for(i = 0; i < 4; i++){
		d[i] = matriz[i][i];
	}
	
	printf("\nMatriz original e a matriz transformada.\nMatriz original:\n");
	
	for(i = 0; i < 4; i++){
    	printf("\n");
        for(j = 0; j < 4; j++){
    		printf("%.2f  ", matriz[i][j]);
    	}
    }
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
        	matriz[i][j] = 0;
        }
    }
    
    for(i = 0; i < 4; i++){
		matriz[i][i] = d[i];
	}
	
	printf("\nMatriz transformada:");
	
	for(i = 0; i < 4; i++){
    	printf("\n");
        for(j = 0; j < 4; j++){
    		printf("%.2f  ", matriz[i][j]);
    	}
    }
   
    return 0;
}
