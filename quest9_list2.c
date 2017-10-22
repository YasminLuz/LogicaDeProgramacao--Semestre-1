#include<stdio.h>

/*
Calcule a média aritmética entre três notas e mostre a mensagem de acordo com a regulamentação 
do IFBA (Aprovado, Reprovado)
*/

main(){

    bool aprovado;
    float nota1, nota2, nota3, media;


	printf("Informe a sua nota: \n");
	scanf("\n %f,%f,%f", &nota1,&nota2,&nota3);

	media = (nota1+nota2+nota3)/3;

	if (media>=6){
		aprovado = 1;
		printf("Aluno(a) Aprovado(a)! Media = ", media);
	}else {
		aprovado=0;
		printf("Aluno(a) Reprovado(a)! Media = ", media);
	}



}
