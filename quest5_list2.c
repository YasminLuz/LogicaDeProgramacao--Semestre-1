#include<stdio.h>

/*
Escreva um programa que leia o n�mero de litros vendidos e o tipo de combust�vel (codificado da 
seguinte forma: A-�lcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se 
que o pre�o do litro da gasolina � R$ 3,10 e o pre�o do litro do �lcool � R$ 2,30. 
*/

main(){

	char op;
	float litros, descA, descG, valorA, valorG;

	printf("Informe a op��o do combust�vel:\n"
	       " A -ALCOOL \n"
		   " G - GASOLINA \n");
	scanf("\n %c", &op);


	printf("Informe a quantidade de litros:\n");
	scanf("%f", &litros);

	switch(op){
		case 'A':case 'a':
		{

			valorA = litros*2.30;

		    if(litros<=25.0){
			   descA= valorA - (valorA*0.02);
			   printf("O valor a ser pago pelo alcool com desconto �: R$ %f", descA);
		    }else{
		       descA= valorA - (valorA*0.04);
		       printf("O valor a ser pago pelo alcool com desconto �: R$ %f", descA);
			}
	        break;
		}
	    case 'G':case 'g':
		   valorG = litros*3.10;

		   if(litros<=25.0){
		   	   descG= valorG -(valorG*0.03);
			   printf("O valor a ser pago pela gasolina com desconto �: R$ %f", descG);
		    }else{
		       descG= valorG -(valorG*0.05);
		       printf("O valor a ser pago pela gasolina com desconto �: R$ %f", descG);
			}
            break;

	    default:
           printf("\n N�o temos essa op��o =\ Digite novamente...");
           break;
	}

	           getchar();

}
