#include <stdio.h>

/*
Ler uma letra e mostrar se ela � vogal ou consoante
*/

main(){
	
	char letra;
	
	printf("Digite uma letra: \n");
	scanf("%c", &letra);
	
	if (letra=='a'||letra=='e'||letra=='i'||letra =='o'||letra=='u'){
		printf("A letra � uma vogal");
	}else{
		printf("A letra � uma consoante");
	}
}
