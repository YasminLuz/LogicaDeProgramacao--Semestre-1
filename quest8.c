#include <stdio.h>

/*
Fazer um programa em C que leia um valor de hora e informe quantos minutos se passaram até então
*/

main(){

	int hours,min,tempo;
	

	printf("Informe a hora e os minutos (Formato 24 hrs(HH:MM)) \n");
	scanf("%d:%d",&hours,&min);
	
	if(hours<=23 && min<=59 ){
	
	tempo=((60*hours)+min);
	printf("Se passaram %d minutos \n", tempo);
	
	}else{
		
		printf("Digite uma hora ou minuto válidos");
		
	}

	


	
	
	getchar();
	
	
}
