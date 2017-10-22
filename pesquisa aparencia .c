#include <stdio.h>

/*
 Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A-azul; P- preto; V- verde; e C-castanho) e a cor dos cabelos 
 (P-preto; C-castanho; L-louro; e R-ruivo) de seis pessoas, e que calcule e mostre:   a. A quantidade de pessoas com idade superior a 50 anos e peso
 inferior a 60 kg;  
b. A médias das idades das pessoas com altura inferior a 1,50 m;  
c. A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas;  
d. A quantidade de pessoas ruivas e que não possuem olhos azuis.  
*/

main(void){
	
	int id, quant5060, cont150, x, azul = 0, ruivos;
	float media150, alt, peso;
	char olhos = ' ', cabelos=' ';

   for (x=0; x<3; x++){
   	
   	printf("Informe sua idade: \n");
   	scanf("%d",&id);
   	
	printf("Informe seu peso:\n ");
   	scanf("%f",&peso);
   	fflush(stdin);
   	
  	printf("Informe a cor dos seus olhos: a-azul; p-preto; v-verde; c-castanho \n ");
   	scanf("%c",&olhos);
   	
   	printf("Informe sua altura:\n ");
   	scanf("%f",&alt);
  	fflush(stdin);
  	
   	printf("Informe a cor dos seus cabelos: p-preto; c-castanho; l-louro; r-ruivo \n");
   	scanf("%c",&cabelos);
   	
   	 if (id>50){
   	   if(peso<60){
   			quant5060++;
		   }
	  }
	  
	  if(alt<150){
	  	cont150++;
   	 	media150+=id/cont150;	
	   }
	  
	  if(olhos=='a'){
	  	azul++;
	  }else if(cabelos=='r'&& olhos!='a'){
	  	ruivos++;
	  }
	  
	  
	  }
	  
   
   printf("Acima de 50 anos e com menos de 60 kg %d \n",quant5060);	
   printf(" <1,50 %f \n", media150);
   printf("Quant olhos azuis %d \n", azul);	
   printf("Quant ruivos sem olhos azuis %d \n", ruivos);
}
