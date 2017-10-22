#include <stdio.h>

/*
Usuário pede a quantidade de numero que quer que seja impresso. Vai de 0 a N
*/

main(){
    int quant, n, cont_div, i, x;

    printf("Informe a quantidade de numeros primos a serem impressos \n");
    scanf("%d", &quant);
    
     for (x= 1; x<=quant;x--){
	
     n= quant;

       for (i=1;i<=n;i++){

	      if (n%i==0){
	        cont_div++;
	      }
       }
      
          if(cont_div==2){
         	printf("%d - ", n);
          }
      
     quant--;
     i=1;
     cont_div=0;
     

   }

}
