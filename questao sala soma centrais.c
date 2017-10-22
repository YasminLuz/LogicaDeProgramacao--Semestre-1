#include <stdio.h>

/*
Soma dos números centrais de um	número menor que 9999 e mostre a soma dos dígitos centrais(2ºe3º dígitos).Assim, se o numero for 4326, a soma deverá ser 5 (3+2)
*/


main(){
	
	int num, r1, r2, r3, q2, q3, soma;
	
	printf("Digite um número entre 0 - 9999: \n");
	scanf("%d", &num);
	
	if (num> 0 && num< 9999){
		
		r1 = num % 1000;
	
		r2 = r1 % 100;
		q2= r1/100;
		
		r3 = r2 % 10;
		q3 = r2/10;
		
	    soma = q2+ q3;
	    
	printf("A soma é: %d", soma);
	} else {
		printf("Digite um numero dentro do intervalo");
	}
	
}
