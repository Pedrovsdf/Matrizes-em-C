#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0, j=0, ln=0, cn=0;
    float matriz[4][4];
	
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite o valor da coluna %d, linha %d = ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
			}
		if( matriz[i][0] == 0 && matriz[i][1] == 0 && matriz[i][2] == 0 && matriz[i][3] == 0){
			cn++;
		}
    }
    
    for(j = 0; j < 4; j++){
		if( matriz[0][j] == 0 && matriz[1][j] == 0 && matriz[2][j] == 0 && matriz[3][j] == 0){
			ln++;
		}
	}
	
	if( ln == 0){
		printf("\nNao tem nenhuma linha nula.\n");
	}else{
		printf("\nA quantidade de linhas nulas eh: %d\n", ln);
	}
	
	if( cn == 0){
		printf("\nNao tem nenhuma coluna nula.\n");
	}else{
		printf("A quantidade de colunas nulas eh: %d\n", cn);
	}
   
    return 0;
}
