#include <stdio.h>

/*
Ler um n�mero e imprimir se este n�mero � ou n�o par. 
*/

main(){
 
   int num;
 
   printf("Insira um n�mero: \n");
   scanf("%d",&num);
   
   if(num%2==0){
   	printf("O n�mero � par");
   }else{
   	printf("O numero � �mpar");
   }
	
}
