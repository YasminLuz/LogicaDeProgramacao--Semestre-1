#include <stdio.h>

/*
 Ler um n�mero e informar se ele � divis�vel por 10, por 5, por 2 ou se n�o � divis�vel por nenhum 
destes
*/

main(){

	int numero;

	printf("Informe um numero: \n");
	scanf("%d", &numero);

    if(numero%10==0){
         printf("O numero e divisivel por 10 \n");
	}
	if (numero%5==0){
	     printf("O numero e divisivel por 5 \n");
	}
	 if (numero%2==0){
		 printf("O numero e divisivel por 2 \n");
	}
	if (numero%10!=0 && numero%5!=0 && numero%2!=0){
		printf("O numero n�o e divis�vel por nenhum");
	}

}
