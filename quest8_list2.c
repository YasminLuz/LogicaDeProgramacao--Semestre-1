#include <stdio.h>

/*
Receba um numero inteiro de 1 a 100 e mostre na tela o numero por extenso
*/

main(){

	int n, un, dez, cen;

	printf("Informe um numero entre 1 - 100:\n");
	scanf("%d",&n);

	if(n<1 || n>100){
		printf(" ERRO!!! DIGITE O VALOR ENTRE 1 E 100\n");
	}

		cen= n/100;
		dez= (n%100)/10;
		un= (n%10);

	if (cen==1 && un==0 && dez==0){
			printf("Cem ");
	}

    if (n>=1 && n<=100){
    	
		switch(dez){
			case 1:switch(un){
				    case 0:printf("Dez ");break;
				    case 1:printf("Onze ");break;
				    case 2:printf("Doze ");break;
				    case 3:printf("Treze ");break;
				    case 4:printf("Quatorze ");break;
				    case 5:printf("Quinze ");break;
				    case 6:printf("Dezesseis ");break;
				    case 7:printf("Dezessete ");break;
				    case 8:printf("Dezoito ");break;
				    case 9:printf("Deznove ");break;
				   } break;

			case 2: {
					if (un==0){
				      printf("Vinte ");
			        } else {
			          printf("Vinte e ");
			        }break;}
			        
			case 3: if (un==0){
					printf("Trinta ");
					} else {
						printf("Trinta e ");                                                 
					} break;
					
			case 4: if (un == 0) {
			         printf("Quarenta ");
					 }else {
					 	printf("Quarenta e ");
					 }
					 break;
					 
			case 5: if (un==0){
					printf("Cinquenta "); 
					} else {
						printf("Cinquenta e ");
					} break;
			case 6: if (un ==0){
			        printf("Sessenta ");
					} else {
						printf("Sessenta e ");
					} break;
					
			case 7: if (un==0){
				    printf("Setenta ");
					} else {
						printf("Setenta e ");
					} break;
					
			case 8: if (un == 0){
				    printf("Oitenta ");
					} else {
						printf("Oitenta e ");
					}break;
					
			case 9: if (un==0){
				    printf("Noventa "); 
					} else {
						printf("Noventa e ");
					}break;
	  } 
	  
    if (dez!=1) {
	
		switch (un){
			        case 1:printf("Um ");break;
				    case 2:printf("Dois ");break;
				    case 3:printf("Tres ");break;
				    case 4:printf("Quatro ");break;
				    case 5:printf("Cinco ");break;
				    case 6:printf("Seis ");break;
				    case 7:printf("Sete ");break;
				    case 8:printf("Oito ");break;
				    case 9:printf("Nove ");break;
		}
    }
    
    }
		getchar();
}
