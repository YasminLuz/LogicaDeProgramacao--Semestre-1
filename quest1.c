#include <stdio.h>

/*
Fazer um programa em C que dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro. 
*/

main(){
	
	double base, alt, area, perimetro;
	
	printf("--------Calculadora de área e perímetro de retangulo------\n \n");
	printf("Informe o valor da base: \n");
	scanf("%lf", &base);
	
	printf("Informe o valor da altura: \n");
	scanf("%lf", &alt);
	 
	area= base*alt;
	
	perimetro = ((base*2)+(alt*2));
	
	printf("O valor da area e: \n %lf",area);
	
	printf("O valor do perimetro é:\n %lf",perimetro);
	
	
	getchar();
	
	
	
}
