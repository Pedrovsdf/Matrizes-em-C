#include <stdio.h>
int main(){
	int i, j;
	float nota1[5][3], nota2[5][3], nota3[5][3], mediaind[5][3], mediatotal[3];
	
	for( i = 0; i < 3; i++ ){
		for ( j = 0; j < 5; j++){
		printf("\nDigite as 3 notas do aluno %d, da turma %d \n", j + 1, i + 1);
		scanf("%f", &nota1[j][i]);
		scanf("%f", &nota2[j][i]);
		scanf("%f", &nota3[j][i]);
		}
	}
	
	for( i = 0; i < 3; i++ ){
		for ( j = 0; j < 5; j++){
		mediaind[j][i] = (nota1[j][i] + nota2[j][i] + nota3[j][i])/3;
		}
	}
	
	for( i = 0; i < 3; i++ ){
		for ( j = 0; j < 5; j++){
		mediatotal[i] = mediaind[j][i] + mediatotal[i];
		}
		mediatotal[i] = mediatotal[i]/5;
	}
	
	for( i = 0; i < 3; i++ ){
		printf("\nA media total da turma %d eh: %.2f\n", i+1, mediatotal[i]);
	}
	
	printf("\nOs alunos que estao acima da media e suas notas sao: \n ");
	
	for( i = 0; i < 3; i++ ){
		for ( j = 0; j < 5; j++){
		if ( mediaind[j][i] >= mediatotal[i])
			printf("\nO aluno %d da turma %d\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", j + 1, i + 1, mediaind[j][i], nota1[j][i], nota2[j][i], nota3[j][i]);
		}
	}
	
	if( mediatotal[0] > mediatotal[1] && mediatotal[0] > mediatotal[2]){
		printf("\nA turma com maior media foi a turma 1");
	}
	if( mediatotal[1] > mediatotal[0] && mediatotal[1] > mediatotal[2]){
		printf("\nA turma com maior media foi a turma 2");
	}
	if( mediatotal[2] > mediatotal[0] && mediatotal[2] > mediatotal[1]){
		printf("\nA turma com maior media foi a turma 3");
	}
	return 0;
}
