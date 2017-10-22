#include <stdio.h>
#define l 2
#define c 3


main(void){

   int mat[l][c];
   int x, y, maior = 0;
   

   for(x = 0; x < l; x++){
   	for(y = 0; y < c; y++ ){
   		
   		printf("Digite um numero: \n");
   		scanf("%d", &mat[x][y]);
   		
   		 if(mat[x][y] > maior){
   			maior = mat[x][y];
		  }
		  
		}
    }
  
   for(x = 0; x < l; x++){
   	for(y = 0; y < c; y++ ){

    }
    printf(" \n O maior valor é: %d \t \n", maior);
    break;1
   }
    
      
   for(x = 0; x < l; x++){
   	for(y = 0; y < c; y++ ){
   		
   			printf("%d  ", mat[x][y]);
   	 }
   	  printf("\n");
	}

	
}

