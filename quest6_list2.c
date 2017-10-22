#include <stdio.h>

/*
 Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de pulverização 
dependem do tipo de praga e da área a ser contratada conforme a tabela: 
• Tipo 1 – ervas daninhas R$ 50,00 por acre; 
• Tipo 2 – gafanhotos R$ 100,00 por acre; 
• Tipo 3 – broca R$ 150,00 por acre; 
• Tipo 4 – todos acima R$ 250,00 por acre. 
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 5%. Em adição, 
qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um desconto de 10% sobre o valor que 
ultrapassar os R$ 750,00. Caso ambos os descontos se apliquem, o da área é calculado antes. Fazer um 
programa que leia: o tipo de pulverização (1 a 4) e área a ser pulverizada; e imprima o valor a ser 
pago. 
*/

main(){

    int op, acre;
	float valor;

	printf("Informe o tipo de praga conforme as opções abaixo:\n"
	       "1 - Erva daninha \n"
		   "2 - Gafanhotos \n "
		   "3 - Brocas \n"
		   "4 - Todos acima \n");
	scanf("\n %d", &op);


	printf("Informe a dimensao do terreno em acre:\n");
	scanf("%f", &acre);

	switch(op){
		
		case 1: valor= acre * 50.0;
		   	    break;
		
		case 2: valor = acre * 100.0;
		        break;
		
		case 3: valor = acre * 150.0;
		        break;
		
		case 4: valor = acre * 250.0;
		        break;
		        
		default: printf("Informe um valor válido!");
	}
	
	 printf("ENTROU AQUI!!");
	 printf ("%d \n\n", valor );
	 
	if (acre > 1000){
       	valor -= (valor * 0.05);
       	printf("O valor a ser pago e: R$ %f", valor);
       	
       	
    } else if (valor > 750){
       	valor -= (valor*0.10);
       	printf("BO valor a ser pago e: R$ %f", valor);
       	
	} else if (acre > 1000 && valor > 750){
	   	valor -= ((valor*0.05)+(valor*0.10));
	   	printf("CO valor a ser pago e: R$ %f", valor);
	}


}
