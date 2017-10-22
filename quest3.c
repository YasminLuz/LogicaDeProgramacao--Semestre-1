#include <stdio.h>

/*
Fazer um programa em C que dado o tamanho do raio de uma circunferência, calcule a área e o perímetro da mesma
*/

main(){

	double raio, area, perimetro;
	
	printf("--------Calculadora de area e perimetro do circulo------ \n \n");
	
	printf("Informe o valor do raio: \n");
	scanf("%lf", &raio);
	

	 
	area= (3.14* (raio*raio));
	
	perimetro = 2*3.14*raio;
	
	
	printf("O valor da area e:\n %lf", area);
	
	printf("O valor do perimetro e:\n %lf",perimetro);
	
	
	getchar();
	
	
}
