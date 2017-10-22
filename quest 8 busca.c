#include <stdio.h>
#define TAM 7

/*
Procurar por um numero no vetor
*/

main(){
	int num[TAM]= {0}, x, procura, teste =0;
	
	for(x = 0; x <TAM -1; x++){
	 printf("Informe um numero: \n");
	 scanf(" %d",&num[x]);
    }
    
    fflush(stdin);
    printf("Procure por um numero no vetor: \n");
	scanf(" %d",&procura);
	
	
    for(x = 0; x < TAM -1; x++){
     if (procura == num[x]){
	   	printf("Posicao %d", x);
	   	teste++;
	   	break;
	 }
	}
	
	 if(teste!=1){
		   	printf("Nao existe esse numero no vetor");
	  	
	 }
	 
}



