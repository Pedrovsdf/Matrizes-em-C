#include <stdio.h>

int main(){
    int matriz[3][4], soma=0, media=0, i=0, j=0;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4 ; j++){
            printf("Digite o valor da linha %d, coluna %d = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
	
	for(i = 0; i < 3; i++){
        for(j = 0; j < 4 ; j++){
            if (matriz[i][j] % 2 == 0){
			soma = soma + matriz[i][j];
        	}
		}
	}
    
	media = (matriz[0][1] + matriz[1][1] + matriz[2][1])/3;
	
	for(i = 0; i < 3; i++){
            matriz[i][2] = matriz[i][0] + matriz[i][1];
        }
	
	printf("\nA soma dos numeros pares da matriz eh: %d", soma);
	printf("\nA media dos numeros da segunda coluna da matriz eh: %d", media);
	printf("\nA soma das colunas 1 e 2 na matriz modificada eh:");
	
	for(i = 0; i < 3; i++){
    	printf("\n");
        for(j = 0; j < 4; j++){
    		printf("%d  ", matriz[i][j]);
    	}
    }
   
    return 0;
}
