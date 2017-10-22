#include <stdio.h>

/*
Fazer a logica da sequencia de Fibanacci e imprimir
*/

main(){
	
	int num, soma = 0, i =1, b = 1, aux=0;

    printf("Informe um número: \n");
	scanf("%d",&num);
	
	printf("%d \n", b);
	
	for(i; i <= num; i++){
	
		soma = b+aux;
		aux = b;
		b=soma;
		
		printf("%d \n", soma);
	}	
	
}
