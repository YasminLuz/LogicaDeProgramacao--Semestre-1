#include <stdio.h>

/*
Fazer um programa em C que leia uma temperatura em graus Celsius e apresente-a convertida em Farenheit( F= (9xc + 160)/5)  
*/
 main(){

	float cel, F;
	
	printf("Informe uma temperatura em graus Celsius: \n");
	scanf("%f", &cel);
	
	F= ((9*cel+160)/5); 
	
	printf("A temperatura %fºC convertida para Fahrenheit e: %f",cel,F);
	
	
	getchar();
		
	
}
