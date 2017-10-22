#include <stdio.h>
#define TAM 10

main(){
	char frase[TAM] = {'\0'};
	char aux;
	int i;
	//ESTE PROGRAMA INVERTE A ORDEM DAS LETRAS
	    printf("Informe uma palavra: \n");
		//scanf(" %s", frase); //" %4s" obriga o usuário a colocar somente a quantidade de 4 caracteres
		scanf(" %10s", frase);
		fflush(stdin);
		
	
	//	puts(frase); //imprime a variável com um \n
	// scanf(" %[^\n] 19s", frase); ignora o \n
	// fgets(frase, 20, stdin (valor de entrada));
		
	for (i = TAM-1; i >= 0; i--){

	  if (frase[i]!= '\0'){
		printf("%c", frase[i] );
	  }
		

	
	}
}
	

