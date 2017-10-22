#include <stdio.h>

/*
Fazer um programa em C que dado o tamanho do lado de um quadrado, calcule a área e o perímetro do mesmo.

*/

main(){

	double lado, area, perimetro;
	
	printf("--------Calculadora de área e perímetro do quadrado------ \n \n");
	
	printf("Informe um lado do quadrado: \n");
	scanf("%lf", &lado);
	
	 
	area= lado*lado;
	
	perimetro = lado*4;
	
	
	printf("O valor da area e:\n %lf",area);
	
	printf("O valor do perimetro e:\n %lf",perimetro);
	
	
	getchar();
	
	
}
