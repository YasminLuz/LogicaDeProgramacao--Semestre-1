#include <stdio.h>

/*
Fazer um programa em C que calcule e apresente o volume de uma caixa retangular, por meio da fórmula: volume= comprimento x largura x altura
*/

main(){

	float comp, alt, larg, volume;
	
	printf("--------Calculadora de perimetro do triangulo------- \n \n");
	
	printf("Informe um lado triangulo: \n");
	scanf("%f", &comp);
	
	printf("Informe outro lado triangulo: \n");
	scanf("%f", &alt);
	
	
	printf("Informe outro lado triangulo: \n");
	scanf("%f", &larg);
	

	volume = alt*comp*larg;
	

	printf("O volume da caixa e: %f",volume);
	
	
	getchar();
	
	
}
