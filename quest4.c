#include <stdio.h>

/*
Fazer um programa em C que dados os três lados de um triângulo determine o perímetro do mesmo

*/


main(){

	float l1, l2, l3, perimetro;
	
	printf("--------Calculadora de perímetro do triangulo------ \n \n");
	
	printf("Informe um lado triangulo: \n");
	scanf("%f", &l1);
	
	printf("Informe outro lado triangulo: \n");
	scanf("%f", &l2);
	
	
	printf("Informe outro lado triangulo: \n");
	scanf("%f", &l3);
	

	perimetro = l1+l2+l3;
	

	printf("O valor do perimetro do triangulo e: %f",perimetro);
	
	
	getchar();
	
	
}
