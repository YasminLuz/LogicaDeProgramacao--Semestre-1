#include <stdio.h>

/*
Soma dos n�meros centrais de�um	n�mero�menor que 9999�e�mostre�a soma�dos�d�gitos centrais(2�e3��d�gitos).Assim, se o numero for 4326, a soma dever� ser 5 (3+2)
*/


main(){
	
	int num, r1, r2, r3, q2, q3, soma;
	
	printf("Digite um n�mero entre 0 - 9999: \n");
	scanf("%d", &num);
	
	if (num> 0 && num< 9999){
		
		r1 = num % 1000;
	
		r2 = r1 % 100;
		q2= r1/100;
		
		r3 = r2 % 10;
		q3 = r2/10;
		
	    soma = q2+ q3;
	    
	printf("A soma �: %d", soma);
	} else {
		printf("Digite um numero dentro do intervalo");
	}
	
}
