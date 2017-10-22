#include<stdio.h>

/*
Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em número mínimo
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).

*/

int main () {
	
	int cem = 0,cinquenta = 0,vinte = 0,dez = 0,cinco = 0 ,dois = 0,um = 0, saque;
	int r_cem = 0, r_cinq = 0, r_vinte = 0, r_dez = 0, r_cinco = 0,r_dois = 0,r_um = 0;
	
//	int ct100, ct50, ct20,ct10,ct5,ct2,ct1;
	
	printf("Informe o valor do saque: \n");
	scanf(" %d", &saque);
	
    
	if (saque > 0){
		
	
		   cem =saque/100;
		   r_cem = saque%100;	
		
		
		if(r_cem >=50)
		   cinquenta= r_cem /50;
		   r_cinq = r_cem % 50; 
	    
	    
	    if(r_cinq>=20)
	    	vinte = r_cinq /20;
	        r_vinte = r_cinq % 20;
     	
     	if (r_vinte>=10)
           dez = r_vinte / 10;
           r_dez = r_vinte % 10;
        
        if(r_dez>=5)
           cinco= r_dez/5;
           r_cinco = r_dez % 5;
        
        if( r_cinco>=2)
		  dois= r_cinco / 2;
		  r_dois = r_cinco % 2;
	   	
     	
     	if(r_dois>=1)
     	  um = r_dois;
     	
        
        printf("Nota 1: %d\n",um);
		printf("Nota 2: %d\n",dois);
		printf("Nota 5: %d\n",cinco);
		printf("Nota 10: %d\n",dez);
		printf("Nota 20: %d\n",vinte);
		printf("Nota 50: %d\n",cinquenta);
		printf("Nota 100: %d\n",cem);
		
	}else{
		
		printf("Digite um valor válido!");
	}
	 
       
	
}
