#include <stdio.h>

/*
Fazer um programa em C que dado o tamanho da base e da altura de um ret�ngulo, calcular a sua �rea e o seu per�metro. 
*/

main(){
	
	double base, alt, area, perimetro;
	
	printf("--------Calculadora de �rea e per�metro de retangulo------\n \n");
	printf("Informe o valor da base: \n");
	scanf("%lf", &base);
	
	printf("Informe o valor da altura: \n");
	scanf("%lf", &alt);
	 
	area= base*alt;
	
	perimetro = ((base*2)+(alt*2));
	
	printf("O valor da area e: \n %lf",area);
	
	printf("O valor do perimetro �:\n %lf",perimetro);
	
	
	getchar();
	
	
	
}
