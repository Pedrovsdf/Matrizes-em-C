#include <stdio.h>

int main(){
    int matriz[3][3], cont=0, i=0, j=0;
   
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da coluna %d, linha %d = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
   
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            if(matriz[i][j] > 10)
                cont++;

	if(cont == 0){
		printf("\nNa matriz nao existem numeros maiores que 10.");
	}else{
		printf("\nNa matriz existem %d numeros maiores que 10.", cont);
	}
   
    return 0;
}
