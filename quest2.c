#include <stdio.h>

/*
Fazer um programa em C que dado o tamanho do lado de um quadrado, calcule a �rea e o per�metro do mesmo.

*/

main(){

	double lado, area, perimetro;
	
	printf("--------Calculadora de �rea e per�metro do quadrado------ \n \n");
	
	printf("Informe um lado do quadrado: \n");
	scanf("%lf", &lado);
	
	 
	area= lado*lado;
	
	perimetro = lado*4;
	
	
	printf("O valor da area e:\n %lf",area);
	
	printf("O valor do perimetro e:\n %lf",perimetro);
	
	
	getchar();
	
	
}
