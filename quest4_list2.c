#include <stdio.h>

/*
 Ler um n�mero e mostrar seu quadrado, sem usar a fun��o pow()
*/

main(){
 
   int num, quadrado;
 
   printf("Insira um n�mero: \n");
   scanf("%d",&num);
   
   quadrado= num*num;
   
   printf("\nO quadrado do numero �: %d", quadrado);
   
   printf("\nPress Any Key to Continue\n");
   getchar();
}
