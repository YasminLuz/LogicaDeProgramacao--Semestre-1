#include <stdio.h>
#define MAX 4

/*
Organizar um array em ordem decrescente 
*/
 
 main(){
 	
 	int v[MAX];
 	int i, j, aux, n;
 	
 	for(n = 0; n < MAX; n++){
 		printf("Informe um valor:");
		scanf("%d",&v[n]);	
	}
	 
 	for( i = MAX-1; i > 0; i--){
 		for( j = 0; j < i; j++){
// 		
 			
		  if (v[j] < v[j+1]){
		  	aux= v[j];
		  	v[j]= v[j+1];
		  	v[j+1]= aux; //troca
		  }
		 }
	 }
	 
	 for(n = 0; n < MAX; n++)
	 	printf("%d \n", v[n]);
	 	getchar();
 }
