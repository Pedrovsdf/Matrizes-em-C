#include <stdio.h>
int main(){
	float nota1=0, nota2=0, nota3=0, nota4=0, nota5=0, nota6=0, nota7=0, nota8=0, nota9=0, nota10=0, nota11=0, nota12=0, nota13=0, nota14=0, nota15=0;
	float nota16=0, nota17=0, nota18=0, nota19=0, nota20=0, nota21=0, nota22=0, nota23=0, nota24=0, nota25=0, nota26=0, nota27=0, nota28=0, nota29=0, nota30=0;
	float nota31=0, nota32=0, nota33=0, nota34=0, nota35=0, nota36=0, nota37=0, nota38=0, nota39=0, nota40=0, nota41=0, nota42=0, nota43=0, nota44=0, nota45=0;
	float mediaind1=0, mediaind2=0, mediaind3=0, mediaind4=0, mediaind5=0;
	float mediaind6=0, mediaind7=0, mediaind8=0, mediaind9=0, mediaind10=0;
	float mediaind11=0, mediaind12=0, mediaind13=0, mediaind14=0, mediaind15=0;
	float mediatotal1=0, mediatotal2=0, mediatotal3=0;

	printf("\nDigite as 3 notas do aluno 1, da turma 1 \n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);

	printf("\nDigite as 3 notas do aluno 2, da turma 1 \n");
	scanf("%f", &nota4);
	scanf("%f", &nota5);
	scanf("%f", &nota6);
	
	printf("\nDigite as 3 notas do aluno 3, da turma 1 \n");
	scanf("%f", &nota7);
	scanf("%f", &nota8);
	scanf("%f", &nota9);
	
	printf("\nDigite as 3 notas do aluno 4, da turma 1 \n");
	scanf("%f", &nota10);
	scanf("%f", &nota11);
	scanf("%f", &nota12);
	
	printf("\nDigite as 3 notas do aluno 5, da turma 1 \n");
	scanf("%f", &nota13);
	scanf("%f", &nota14);
	scanf("%f", &nota15);
	
	printf("\nDigite as 3 notas do aluno 1, da turma 2 \n");
	scanf("%f", &nota16);
	scanf("%f", &nota17);
	scanf("%f", &nota18);
	
	printf("\nDigite as 3 notas do aluno 2, da turma 2 \n");
	scanf("%f", &nota19);
	scanf("%f", &nota20);
	scanf("%f", &nota21);
	
	printf("\nDigite as 3 notas do aluno 3, da turma 2 \n");
	scanf("%f", &nota22);
	scanf("%f", &nota23);
	scanf("%f", &nota24);
	
	printf("\nDigite as 3 notas do aluno 4, da turma 2 \n");
	scanf("%f", &nota25);
	scanf("%f", &nota26);
	scanf("%f", &nota27);
	
	printf("\nDigite as 3 notas do aluno 5, da turma 2 \n");
	scanf("%f", &nota28);
	scanf("%f", &nota29);
	scanf("%f", &nota30);
	
	printf("\nDigite as 3 notas do aluno 1, da turma 3 \n");
	scanf("%f", &nota31);
	scanf("%f", &nota32);
	scanf("%f", &nota33);

	printf("\nDigite as 3 notas do aluno 2, da turma 3 \n");
	scanf("%f", &nota34);
	scanf("%f", &nota35);
	scanf("%f", &nota36);
	
	printf("\nDigite as 3 notas do aluno 3, da turma 3 \n");
	scanf("%f", &nota37);
	scanf("%f", &nota38);
	scanf("%f", &nota39);
	
	printf("\nDigite as 3 notas do aluno 4, da turma 3 \n");
	scanf("%f", &nota40);
	scanf("%f", &nota41);
	scanf("%f", &nota42);
	
	printf("\nDigite as 3 notas do aluno 5, da turma 3 \n");
	scanf("%f", &nota43);
	scanf("%f", &nota44);
	scanf("%f", &nota45);
	
	
	mediaind1 = (nota1 + nota2 + nota3)/3;
	mediaind2 = (nota4 + nota5 + nota6)/3;
	mediaind3 = (nota7 + nota8 + nota9)/3;
	mediaind4 = (nota10 + nota11 + nota12)/3;
	mediaind5 = (nota13 + nota14 + nota15)/3;
	mediaind6 = (nota16 + nota17 + nota18)/3;
	mediaind7 = (nota19 + nota20 + nota21)/3;
	mediaind8 = (nota22 + nota23 + nota24)/3;
	mediaind9 = (nota25 + nota26 + nota27)/3;
	mediaind10 = (nota28 + nota29 + nota30)/3;
	mediaind11 = (nota31 + nota32 + nota33)/3;
	mediaind12 = (nota34 + nota35 + nota36)/3;
	mediaind13 = (nota37 + nota38 + nota39)/3;
	mediaind14 = (nota40 + nota41 + nota42)/3;
	mediaind15 = (nota43 + nota44 + nota45)/3;
	
	
	mediatotal1 = (mediaind1 + mediaind2 + mediaind3 + mediaind4 + mediaind5)/5;
	mediatotal2 = (mediaind6 + mediaind7 + mediaind8 + mediaind9 + mediaind10)/5;
	mediatotal3 = (mediaind11 + mediaind12 + mediaind13 + mediaind14 + mediaind15)/5;
	
	printf("\nA media total da turma 1 eh: %.2f\n", mediatotal1);
	printf("\nA media total da turma 2 eh: %.2f\n", mediatotal2);
	printf("\nA media total da turma 3 eh: %.2f\n", mediatotal3);
	
	printf("\nOs alunos que estao acima da media e suas notas sao: \n ");
	
	
	if (mediaind1 >= mediatotal1){
		printf("\nO aluno 1 da turma 1\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind1, nota1, nota2, nota3);
	}
	if (mediaind2 >= mediatotal1){
		printf("\nO aluno 2 da turma 1\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind2, nota4, nota5, nota6);
	}
	if (mediaind3 >= mediatotal1){
		printf("\nO aluno 3 da turma 1\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind3, nota7, nota8, nota9);
	}
	if (mediaind4 >= mediatotal1){
		printf("\nO aluno 4 da turma 1\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind4, nota10, nota11, nota12);
	}
	if (mediaind5 >= mediatotal1){
		printf("\nO aluno 5 da turma 1\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind5, nota13, nota14, nota15);
	}
	if (mediaind6 >= mediatotal2){
		printf("\nO aluno 1 da turma 2\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind6, nota16, nota17, nota18);
	}
	if (mediaind7 >= mediatotal2){
		printf("\nO aluno 2 da turma 2\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind7, nota19, nota20, nota21);
	}
	if (mediaind8 >= mediatotal2){
		printf("\nO aluno 3 da turma 2\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind8, nota22, nota23, nota24);
	}
	if (mediaind9 >= mediatotal2){
		printf("\nO aluno 4 da turma 2\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind9, nota25, nota26, nota27);
	}
	if (mediaind10 >= mediatotal2){
		printf("\nO aluno 5 da turma 2\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind10, nota28, nota29, nota30);
	}
	if (mediaind11 >= mediatotal3){
		printf("\nO aluno 1 da turma 3\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind11, nota31, nota32, nota33);
	}
	if (mediaind12 >= mediatotal3){
		printf("\nO aluno 2 da turma 3\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind12, nota34, nota35, nota36);
	}
	if (mediaind13 >= mediatotal3){
		printf("\nO aluno 3 da turma 3\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind13, nota37, nota38, nota39);
	}
	if (mediaind14 >= mediatotal3){
		printf("\nO aluno 4 da turma 3\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind14, nota40, nota41, nota42);
	}
	if (mediaind15 >= mediatotal3){
		printf("\nO aluno 5 da turma 3\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind15, nota43, nota44, nota45);
	}
	
	if( mediatotal1 > mediatotal2 && mediatotal1 > mediatotal3){
		printf("\nA turma com maior media foi a turma 1");
	}
	if( mediatotal2 > mediatotal1 && mediatotal2 > mediatotal3){
		printf("\nA turma com maior media foi a turma 2");
	}
	if( mediatotal3 > mediatotal1 && mediatotal3 > mediatotal2){
		printf("\nA turma com maior media foi a turma 3");
	}
	
	return 0;
}
