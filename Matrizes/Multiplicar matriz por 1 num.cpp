#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4], num=0, i=0, j=0;
   
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o valor da linha %d, coluna %d = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
	
	printf("Digite o valor do numero que vai multiplicar a matriz: ");
	scanf("%d", &num);
	
	for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
			matriz[i][j] = matriz[i][j] * num;
        }
    }
    
	for(i = 0; i < 4; i++){
    	printf("\n");
        for(j = 0; j < 4; j++){
    		printf("%d  ", matriz[i][j]);
    	}
    }
   
    return 0;
}
