#include <stdio.h>
/*
Um sistema de transmiss�o de dados usa um mecanismo simples para verifica��o de paridade: o sistema l� o valor inteiro em decimal
a ser transmitido, o converte para bin�rio, em seguida monta para transmiss�o um �nico valor inteiro com n�mero par de bits ligados (bits 1),
atrav�s da modifica��o do bit menos significativo do n�mero a ser transmitido. Escreva um algoritmo em C, que leia um n�mero inteiro entre 0-15,
use o algoritmo descrito para montar um �nico n�mero a ser transmitido e, por fim, imprima este n�mero.
Ex: Considere que o n�mero informado seja 11. Neste caso, a representa��o bin�ria do n�mero ser� 1011, que possui um n�mero �mpar de bits ligados.
Assim, acrescentando-se um n�mero 1 ao bit menos significativo, temos que o bin�rio a ser transmitido dever� ser 10111. Por outro lado, se o
n�mero informado for 5 teremos que a representa��o bin�ria ser� 0101. Como j� temos um n�mero par de bits ligados, acrescentaremos um 0 ao bit
menos significativo para n�o alterar a paridade do n�mero. O valor a ser impresso dever� ser 01010 (no caso em quest�o, a sa�da dever� ser 1010).
*/
main(){
	
	int dec, bin, cont1, cont0;
	int  dg1, dg2,dg3, q1, q2, q3;
	
	printf("Informe um n�mero entre 0-15: \n");
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
