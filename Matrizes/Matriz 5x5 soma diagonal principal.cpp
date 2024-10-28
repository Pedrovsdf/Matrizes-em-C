#include <stdio.h>

int main(){
	int matriz[5][5], i, j, soma = 0;

	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("Digite o valor da linha %d, coluna %d = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
		}
	}

	soma = matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3] + matriz[4][4];

	printf ("\nA soma da diagonal principal da matriz eh: %d", soma);

	return 0;
}
