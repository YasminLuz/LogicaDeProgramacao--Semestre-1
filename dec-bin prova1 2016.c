#include <stdio.h>
/*
Um sistema de transmissão de dados usa um mecanismo simples para verificação de paridade: o sistema lê o valor inteiro em decimal
a ser transmitido, o converte para binário, em seguida monta para transmissão um único valor inteiro com número par de bits ligados (bits 1),
através da modificação do bit menos significativo do número a ser transmitido. Escreva um algoritmo em C, que leia um número inteiro entre 0-15,
use o algoritmo descrito para montar um único número a ser transmitido e, por fim, imprima este número.
Ex: Considere que o número informado seja 11. Neste caso, a representação binária do número será 1011, que possui um número ímpar de bits ligados.
Assim, acrescentando-se um número 1 ao bit menos significativo, temos que o binário a ser transmitido deverá ser 10111. Por outro lado, se o
número informado for 5 teremos que a representação binária será 0101. Como já temos um número par de bits ligados, acrescentaremos um 0 ao bit
menos significativo para não alterar a paridade do número. O valor a ser impresso deverá ser 01010 (no caso em questão, a saída deverá ser 1010).
*/
main(){
	
	int dec, bin, cont1, cont0;
	int  dg1, dg2,dg3, q1, q2, q3;
	
	printf("Informe um número entre 0-15: \n");
	scanf("%d", &dec);
	
//	while(dec>-1 && dec<16){
	
	    dg1= dec%2;
	    q1= dec/2;
	    
	    dg2=q1%2;
	    q2=q1/2;
	    
	    
	    dg3=q2%2;
	    q3=q2/2;
	    
	    //dg4=q3%2;
	   // q4=q3/2;
    
     switch(dg1){
     	case 1:cont1++;break;
     	case 0: cont0++; break;
	 }
	 
	  switch(dg2){
     	case 1:cont1++;break;
     	case 0: cont0++; break;
	 }
	 
	  switch(dg3){
     	case 1:cont1++;break;
     	case 0: cont0++; break;
	 }
	  switch(q3){
     	case 1:cont1++;break;
     	case 0: cont0++; break;
	 }
	 
	 
		 if(cont1%2==0){
		 	printf("%d%d%d%d0",q3,dg3,dg2,dg1);
		 }else{
		 	printf("%d%d%d%d1",q3,dg3,dg2,dg1);
		 } 
 // }
}
