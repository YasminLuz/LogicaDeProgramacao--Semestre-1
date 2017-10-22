#include <stdio.h>
#define TAM 30

main(void){
	
	char frase[TAM] = {'\0'}, cifra[]={'Q','W','E','R','T','Y','U', 'I','O','P','Z','X','C', 'V','B','N','M','A','S','D','F','G','H','J','K','L'};
	int x, num;
	
	printf("Informe uma palavra: \n");
	scanf(" %[a-z A-Z]s",frase);
 
     for(x = 0; x< TAM-1; x++){
	   	if(frase!='\0'){
		  int index = frase[x] - 'a';
		  printf("%c", cifra[index]);
	    }
     }
}
