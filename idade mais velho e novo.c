#include <stdio.h>
/*
Fazer um programa verificando entre duas pessoas quem é o mais velho e o mais novo a partir da divulgação de suas respectivas idades com mês e dias completados 

*/

main(){
	
	int idade, mes, dia, idade2, mes2, dia2, velha, nova;
	
	
	printf ("Pessoa 1:"
	        "Informe sua idade, mês e dia: \n");
	scanf("%d,%d,%d",&idade,&mes,&dia);
	
	
	printf ("Pessoa 2:"
	        "Informe sua idade, mês e dia: \n");
	scanf("%d,%d,%d",&idade2,&mes2,&dia2);
	
	if (idade >idade2){
		printf("A pessoa mais velha é a pessoa 1 com %d anos", idade);
	}else if (idade2 > idade) {
		printf(" A pesssoa mais velha é a pessoa 2 com %d anos", idade2);
	} else if ( idade == idade2){
			
	    if (mes> mes2){
	 	  printf("A pessoa mais velha é a pessoa 1 com %d anos e %d meses",idade,mes);
	    } else if (mes2 > mes){
	 	  printf ("A pessoa mais velha é a pessoa 2 com %d anos e %d meses",idade2, mes2);
	    }else if (mes==mes2){
	    	
	    	if (dia> dia2){
	 		printf(" A pessoa mais velha é a pessoa 1 com %d anos, %d meses e %d dias", idade, mes, dia);
			}else if (dia2>dia){
			printf("A pessoa mais velha é a pessoa 2 com %d anos, %d meses e %d dias",idade2, mes2, dia2);
		    }else if (dia==dia2){
		    	printf("Ambos possuem a mesma idade");
			}
	    }
    }
	    	
}
