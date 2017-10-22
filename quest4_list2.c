#include <stdio.h>

/*
 Ler um número e mostrar seu quadrado, sem usar a função pow()
*/

main(){
 
   int num, quadrado;
 
   printf("Insira um número: \n");
   scanf("%d",&num);
   
   quadrado= num*num;
   
   printf("\nO quadrado do numero é: %d", quadrado);
   
   printf("\nPress Any Key to Continue\n");
   getchar();
}
