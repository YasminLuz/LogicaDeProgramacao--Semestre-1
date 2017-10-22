#include <stdio.h>

/*
 Ler 3 valores e escrever a soma dos 2 maiores
*/

main(){
	
	int n1, n2, n3, soma = 0, maior = 0, maior2 = 0;
	
	printf("Digite um numero: \n");
	scanf("%d", &n1);
	
	 maior = n1;
	 
	 
	printf("Digite outro numero: \n");
	scanf("%d", &n2);
	
	
	if (maior<n2){
		maior=n2;
		maior2=n1;
	}else{
	    maior2 = n2;
	    maior=n1;
	}
	
	printf("Digite mais um numero: \n");
	scanf("%d", &n3);
	
	if (maior2<n3 && n3<maior){
		maior2=n3;
	}
	else if (maior<n3 && n3<maior2){
		maior=n3;
	}
	
	soma = maior+maior2;
	
	printf("A soma dos dois maiores é: %d", soma);
	
	
	
}
