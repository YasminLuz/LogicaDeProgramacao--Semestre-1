#include <stdio.h>

/*
Ler um número e imprimir se este número é ou não par. 
*/

main(){
 
   int num;
 
   printf("Insira um número: \n");
   scanf("%d",&num);
   
   if(num%2==0){
   	printf("O número é par");
   }else{
   	printf("O numero é ímpar");
   }
	
}
