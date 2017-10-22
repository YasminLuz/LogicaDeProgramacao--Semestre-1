#include <stdio.h>

/*
Fazer um programa em C que leia um número e mostre seu quadrado e sua raiz quadrada
*/

main(){

	int num;
	float raiz, quad;
	

	printf("Informe um numero positivo: \n");
	scanf("%d", &num);

     for(int n=1; n<num;n++){
     	
     	if(n*n==num){
     		raiz= n;
		 }
     }

	
	quad=num*num;
	

	printf("A raiz quadrada de %d e:%f", num, raiz);
    printf("O quadrado de %d e:%f", num, quad);
	
	
	getchar();
	
	
}
