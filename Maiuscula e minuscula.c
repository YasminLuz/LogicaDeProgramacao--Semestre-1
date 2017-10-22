#include <stdio.h>
#define TAM 30

main(void){
	int x;
	char frase[TAM]={'\0'};
	char up;
	
	
	//ESTE PROGRAMA TRANSFORMA LETRAS MINUSCULAS EM MAIUSCULAS
	printf("Informe uma frase:");
	scanf("%[a-z A-Z]s", frase);//scanf(" %[^\n]s",frase);
;
	for(x = 0; x < TAM-1; x++){
		    
		 if(frase[x]>96 && frase[x]<123){
		 	frase[x]-= 97-65;
		 	printf("%c", frase[x]);
		 }
     
	
	}
	
}
